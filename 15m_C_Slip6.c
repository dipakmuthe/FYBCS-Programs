/* A Write a C program to create structure employee (id, name, salary). Accept 
details of n employees and perform the following operations: 
a. Display all employees. 
b. Display details of all employees having salary > ____. */
#include<stdio.h>
   struct emp
  {
      int id;
     char name[20];
      float sal;
}e1[100];
 int main()
{
	int i,ch,n;
				printf("Enter the limit :");
                        scanf("%d",&n);
                        for(i=0;i<n;i++)
                        {
                          printf("Enter the EMP id name sal:");
                          scanf("%d %s %f",&e1[i].id,&e1[i].name,&e1[i].sal);
                        }
      do{

            printf("\n 1-Display All \n 2-Display details of all employees having salary > 50000. \n=:");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:for(i=0;i<n;i++)
                               {
                                printf("\n %d \t %s \t %f",e1[i].id,e1[i].name,e1[i].sal);
                                }
                                break;
				case 2: for(i=0;i<n;i++)
                          {
                             if(e1[i].sal>50000)
                              {
                    printf("\n %d \t %s \t %f",e1[i].id,e1[i].name,e1[i].sal);
                              }
                          }
                             break;
					      default : printf("\n Wrong choice");
                        break;
            }
        }while(ch<3);
}