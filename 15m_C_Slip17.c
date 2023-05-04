// Slip=17

/* Write a program to accept ‘n’ employee details (eno, ename, salary) and 
display all employee details whose salary is more than 10000, by passing 
array of structure to the function. */

#include<stdio.h>
 int i,n;
struct employee
{ 
  int id;
  char name[20];
  float sal;
}e1[100];
int main()
{
      
  void salary(struct employee e1[100],int n);
  	printf("Enter the limit :");
    scanf("%d",&n);
     for(i=0;i<n;i++)
     {
       printf("Enter the Emp id name sal:");
      scanf("%d %s %f",&e1[i].id,&e1[i].name,&e1[i].sal);
      }
      salary(e1,n);

}
void salary(struct employee e1[100],int n)
{
        for(i=0;i<n;i++)
        {
        	if(e1[i].sal>10000)
        	{
			printf("\n Emp no=%d",e1[i].id);
			printf("\n Emp name=%s",e1[i].name);
			printf("\n Emp sal=%f",e1[i].sal);			
		    }
       }
  
}