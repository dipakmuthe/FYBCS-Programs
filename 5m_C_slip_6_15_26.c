//  Slip-6,15,26
/*Write a C program to compare two strings using standard library 
function. */

#include<stdio.h>
#include<string.h>

int main()
{
	char s1[100],s2[100];
	int k;
	printf("enter string 1");
	gets(s1);
	printf("enter string 2");
	gets(s2);
	k=strcmp(s1,s2);
	if(k>0)
	printf("first string greater");
	else if(k<0)
	printf("second string greater");
	else
	printf("equal string");
}