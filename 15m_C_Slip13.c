#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],ch;
	int p;
	int search(char s1[100],char ch);
    printf("Entr string :");
    gets(s1);
    printf("Enter char to search :");
    scanf("%c",&ch);
    p=search(s1,ch);
    if(p==-1)
    printf("char is not found...");
    else
    printf("Char is Found at position=%d",p);
}
 int search(char s1[100],char ch)
 {
 	int i,p=-1;
 	for(i=0;s1[i]!='\0';i++)
 	{
 		if(s1[i]==ch)
 		p=i;
	 }
	 return p;
 }