// Slip=20

/* Write a program to interchange two numbers using pointers. */

#include<stdio.h>
int main()
{
    int a,b,*x,*y,t;
    printf("Enter two Number:");
    scanf("%d%d",&a,&b);
    x=&a;
    y=&b;
    t=*x;
    *x=*y;
    *y=t;
    printf("\n First Number=%d",*x);
    printf("\n Second Number=%d",*y);
}