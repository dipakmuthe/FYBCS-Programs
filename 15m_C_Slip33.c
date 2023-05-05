//  Slip-33

/* Write a program to read the contents of a text file and count the number of 
characters, lines and words in the file. */

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    FILE *fp1;
    char ch;
    int c1=0,c2=0,c3=1;
    fp1=fopen("abc.txt","r");
    if(fp1==NULL)
    {
        printf("\n File Not Found...");
        exit(0);
    }
    while(!feof(fp1))
    {
        ch=fgetc(fp1);
        if(isalpha(ch))
         c1++;
        else if(ch==' '||ch=='\t')
          c2++;
        else if(ch=='\n')
         c3++;
    }
    printf("\n Character Count=%d",c1);
    printf("\n Word Count=%d",c2);
    printf("\n Lines Count=%d",c3); 
     fclose(fp1);  
}