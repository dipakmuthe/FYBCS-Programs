// Slip-32 15m

/* Accept details of n students (roll no, name, percentage) using structure. 
Write a menu driven program for the following: 
a. Display all students 
b. Display all students having percentage > ___*/

#include<stdio.h>
struct student
{
   int rno;
    char sname [20];
    float per;   
}s1[100],t;

int main()
{
int i,n,ch;
char name [20];
        printf("enter limit:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
        printf("enter rno name per:");
        scanf("%d%s%f",&s1[i].rno, &s1[i].sname,&s1[i].per);
        }
      
do{
    printf("\n1-Dispaly All\n2-Display all students having percentage >80");
    printf("\nenter choice:");
    scanf("%d",&ch); 
      switch(ch)
    {
       
  case 1: for(i=0;i<n;i++)
          {
        printf("\nstudent no=%d",
           s1[i].rno);
        printf("\nstudent name=%s",
         s1[i].sname);
        printf("\nstudent per=%f",
          s1[i].per);
        }break;
       
 
   case 2:for(i=0;i<n;i++)
        {
        if(s1[i].per>80)
        {
        printf ("\nstudent no=%d",s1[i].rno);
        printf("\nstudent name=%s",s1[i]. sname);
        printf("\nstudent per=%f",s1[i].per); 
        }            
        }
            break;
default:printf("invalid choice");
 }
}
while(ch<3); 

}