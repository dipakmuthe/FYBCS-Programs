//  Slip-20

/* . Write a program to accept and display details of 5 students (roll no, 
name, percentage) using structure. 
[10 marks] 
 */
#include<stdio.h>
struct student
{
	int rno;
	char sname[20];
	float per;
	
}s1[100];
  int main()
{     
    int i;
    printf("Enter 5 student info.....");
    for(i=0;i<5;i++)
  	{
    printf("\nEnter Roll No:");
  	scanf("%d",&s1[i].rno);
 	printf("Enter Name:");
  	scanf("%s",&s1[i].sname);
    printf("Enter per:");
    scanf("%f",&s1[i].per);
    }
    printf("\n Display =");
    for(i=0;i<5;i++)
    {
        printf("\nRoll No=%d",s1[i].rno);
        printf("\nName=%s",s1[i].sname);
        printf("\nPer=%f",s1[i].per);
        printf("----------------------------");
    }
}