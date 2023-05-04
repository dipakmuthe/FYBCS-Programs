// Slip - 30
 /* Create a structure employee (id, name, salary). Accept details of n 
employees and find the details of employee having maximum salary. 
Write separate function. */

#include<stdio.h>
 int i,n,max;
struct employee
{ 
  int id;
  char name[20];
  float sal;
}e1[100];
int main()
{
      
  void max_salary(struct employee e1[100],int n);
  	printf("Enter the limit :");
    scanf("%d",&n);
     for(i=0;i<n;i++)
     {
       printf("Enter the Emp id name sal:");
      scanf("%d %s %f",&e1[i].id,&e1[i].name,&e1[i].sal);
      }
     max_salary(e1,n);

}
void max_salary(struct employee e1[100],int n)
{
        max=e1[0].sal;
        for(i=0;i<n;i++)
        {
            if(e1[i].sal>max)
           {
              max=e1[i].sal;
           }
        }
        for(i=0;i<n;i++)
        {
        	if(e1[i].sal==max)
        	{
			printf("\n Emp no=%d",e1[i].id);
			printf("\n Emp name=%s",e1[i].name);
			printf("\n Emp sal=%f",e1[i].sal);			
		    }
       }
  
}