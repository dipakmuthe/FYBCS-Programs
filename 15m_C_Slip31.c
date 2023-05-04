// Slip-31

/* Write a menu driven program to perform the following operations on 
strings using user defined functions: 
 i)Length ii)Copy */

#include<stdio.h>
#include<string.h>
int main()
{
char s1[100],s2[100];
int ch;
printf("enter first string:");
gets(s1);
printf("enter second string:");
gets(s2);
do{
printf("\n1-Length\n2-copy");
printf("\nEnter choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("\n First String Length=%d",strlen(s1));
        printf("\n Second String Length=%d",strlen(s2));
        break;
case 2: strcpy(s1,s2);
        printf("\nfirst string=%s",s1);
        printf("\nsecond string=%s",s2);
}

}while(ch<3);
}