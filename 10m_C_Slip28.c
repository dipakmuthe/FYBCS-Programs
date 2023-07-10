   
// Slip-28

/* ii. Write a menu driven C program to perform the following operations 
on strings using standard library functions: 
a. Convert string to lowercase 
b. Compare two strings 
*/

#include<stdio.h>
#include<string.h>
int main()
{
	int ch,k;
	char s1[100],s2[100];
	do
	{
		printf("\n Enter string 1:");
		scanf("%s",&s1);
		printf("\n Enter string 2:");
		scanf("%s",&s2);
		printf("\n1-Convert string to lowercase \n2Compare two string ");
		printf("\n Enter choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			        
			case 1: printf("\n First string to Lowercase=%s",strlwr(s1));
			        printf("\n Second string to Lowercase=%s",strlwr(s2));
				    break;
			        
			case 2: k=strcmp(s1,s2);
			        if(k>0)
			        printf("First string Greater=%s",s1);
			        else if(k<0)
			        printf("Second string Greater=%s",s2);
			        else
			        printf("Same string.");
			        break;
			        
			default : printf("\n Invalid Choice....");
		}
		
	}while(ch<3);
}