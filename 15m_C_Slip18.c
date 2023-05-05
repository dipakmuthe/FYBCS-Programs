//  Slip-18
/* A file “student.txt” contains rollno, name and total_marks. Write a 
program to read this file to display all student details on screen. */

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    FILE *fp1;
    char ch;
    fp1=fopen("student.txt","r");
    if(fp1==NULL)
    {
        printf("\n File Not Found...");
        exit(0);
    }
    while(!feof(fp1))
    {
        ch=fgetc(fp1);
        printf("%c",ch);
    }
    fclose(fp1);
}