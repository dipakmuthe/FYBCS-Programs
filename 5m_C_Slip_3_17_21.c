// Slip-3 17 21 
/*Write a program to find the length of a string using standard library 
function. */

#include<stdio.h>
#include<string.h>

int main()
{
	char s1[100];
	int k;
	printf("enter string");
	gets(s1);
	k=strlen(s1);
	printf("length of string=%d",k);

}