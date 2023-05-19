//upper to lower 
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    printf("\n lowercase=%c",ch-32);
    else 
    printf("\n Uppercase=%c",ch+32);
    return 0;
}