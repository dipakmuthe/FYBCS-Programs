/*A Write a program to declare a structure person (name, address) which 
contains another structure birthdate (day, month, year). Accept the details 
of n persons and display them.*/
#include<stdio.h>
#include<string.h>
struct person
{
char name[20],addr[30];
struct birthdate
{
 int dd,yy,mm;
}
b1[100];
}
P1[100];
int main ()
{
int n,i;
printf("enter limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter name address date month year:");
scanf("%s%s%d%d%d",&P1[i].name,&P1[i].addr,&P1[i].b1[i].dd,&P1[i].b1[i].mm,&P1[i].b1[i].yy);
}
for(i=0;i<n;i++)
{ printf("\n Name=%s",P1[i].name);
  printf("\n Address=%s",P1[i].addr);
  printf("\n Date=%d",P1[i].b1[i].dd);
  printf("\n Month=%d",P1[i].b1[i].mm);
  printf("\n Year=%d",P1[i].b1[i].yy);
}
}
