/* Write a program to copy contents of file a.txt to b.txt by changing the 
case of each alphabet. */
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
   
    fp1=fopen("abc.txt","r");
    fp2=fopen("xyz.txt","w");
    if(fp1==NULL)
    {
        printf("\n File Not Found...");
     
        exit(0);
    }
    while(!feof(fp1))
    {
        ch=fgetc(fp1);
        if(isupper(ch))
         fputc(tolower(ch),fp2);
        else if(islower(ch))
         fputc(toupper(ch),fp2);
    }
     fclose(fp1); 
     fclose(fp2);
    printf("\n File copy succesfully..........");
   
}