//  Slip-22

/* Write a function which accepts a number and three flags as parameters if 
number is even set first flag to 1. If number is prime set second flag to 1 
and if number is divisible by 3 or 7 set the third flag to 1(pass addresses of 
flags to the function.) */

#include<stdio.h>
int main()
{
    int n,f1=0,f2=0,f3=0;
    int check(int n,int *f1,int *f2,int *f3);
    printf("Enter the number:");
    scanf("%d",&n);
    check(n,&f1,&f2,&f3);
    if(f1==1)
    printf("\nNumber is even...");
    if(f2==1)
    printf("\n Number is prime...");
    if(f3==1)
    printf("\n Number is Divisible by 3 or 7...");
}
  int check(int n,int *f1,int *f2,int *f3)
  {
    int i;
    if(n%2==0)
    {
        *f1=1;
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        break;
    }
    if(i==n)
    *f2=1;
    if((n%3==0)||(n%7==0))
    *f3=1;
  }