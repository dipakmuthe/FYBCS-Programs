//Slip-26

/*Write a program to create a structure employee (id, name, salary). Accept 
details of n employees and write a menu driven program to perform the 
following operations. 
i) Search by name 
ii) Display all */

#include<stdio.h>
struct employee
{
   int id;
  char name[20];
  float sal;
}e1[100];
   int main()
 {
   int i,n,ch;
   char name[20];
   printf("\nenter limit:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
{
printf("enter eid name sal:");
scanf("%d%s%f",&e1[i].id,&e1[i].name,&e1[i].sal);
   }         
 do{
printf("\n1-search by name\n2-dis all");
printf("\nenter choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("enter name:");
        scanf("%s",&name);
        for(i=0;i<n;i++)
        {
  if(strcmp(e1[i]. name,name)==0)
{
printf("\nemployee id=%d",e1[i].id);
printf("\nemployee name=%s",e1[i].name);
 printf("\nemployee sal=%f\n",e1[i].sal);    
}
}
break;
case 2: for(i=0;i<n;i++)
{
printf("\nemployee id=%d",e1[i].id);
printf("\nemployee name=%s",e1[i].name);
 printf("\nemployee sal=%f \n",e1[i].sal);    
}
break;
default:printf("invalid choice");
break;
}

}
while (ch<3);
}