//  Slip-20

/*  Write a program to accept and display details of 5 employees (id, 
name, salary) using structure. 
 */
#include<stdio.h>
struct emp
{
	int id;
	char name[20];
	float sal;
	
}e1[100];
  int main()
{     
    int i;
    printf("Enter 5 Emp info.....");
    for(i=0;i<5;i++)
  	{
    printf("\nEnter Id:");
  	scanf("%d",&e1[i].id);
 	printf("Enter Name:");
  	scanf("%s",&e1[i].name);
    printf("Enter sal:");
    scanf("%f",&e1[i].sal);
    }
    printf("\n Display =");
    for(i=0;i<5;i++)
    {
        printf("\n Emp Id=%d",e1[i].id);
        printf("\nName=%s",e1[i].name);
        printf("\nsal=%f",e1[i].sal);
        printf("\n----------------------------");
    }
}