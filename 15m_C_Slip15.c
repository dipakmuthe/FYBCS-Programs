// Slip-15

/* Write a program to perform the following operations on strings using user 
defined functions: 
a. Length of string 
b. Copy one string to another 
c. Convert string to uppercase 
*/

#include<stdio.h>
#include<string.h>
int main()
{
	int ch;
	char s1[100],s2[100];
	do
	{
		printf("\nEnter string 1:");
		scanf("%s",&s1);
		printf("\nEnter string 2:");
		scanf("%s",&s2);
		printf("\n 1-Length \n2-Copy \n3-Convert to Upper");
		printf("\n Enter choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: printf("\n First string length=%d",strlen(s1));
					printf("\n Second string length=%d",strlen(s2));			        
			        break;
			        
			case 2: strcpy(s1,s2);
			        printf("\n Copy string=%s",s1);
			        break;
			        
			case 3: 
                    printf("\n first string Upper=%s",strupr(s1));
			        printf("\n Second string Upper=%s",strupr(s2));
                    break;
			default : printf("\n Invalid Choice....");
		}
		
	}while(ch<4);
}