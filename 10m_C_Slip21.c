// Slip-21

/*Write a program to copy the contents of one file to another.  */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp1,*fp2;
    char ch;

    fp1=fopen("xyz.txt","r");
    fp2=fopen("abc.txt","w");
    if(fp1==NULL)
    {
        printf("\n File Not Found...");
        exit(0);
    }
    while(!feof(fp1))
    {
        ch=fgetc(fp1);
        fputc(ch,fp2);
     
    }
      fclose(fp1); 
      fclose(fp2); 
    printf("\n File Copy Successfully........."); 
}