/* Write a C program to create a structure named book (book_name, 
author_name and price) and display all book details having price > ____ 
in a proper format by passing the structure array as function argument. */
#include<stdio.h>
 int i,n,max;
struct book
{ 
  char name[20],a_name[20];
  float price;
}b1[100];
int main()
{
      
  void price(struct book b1[100],int n);
  	printf("Enter the limit :");
    scanf("%d",&n);
     for(i=0;i<n;i++)
     {
       printf("Enter the Book name author_name price:");
      scanf("%s %s %f",&b1[i].name,&b1[i].a_name,&b1[i].price);
      }
     price(b1,n);

}
void price(struct book b1[100],int n)
{
        for(i=0;i<n;i++)
        {
        	if(b1[i].price>500)
        	{
			printf("\n Book Name=%s",b1[i].name);
			printf("\n Author name=%s",b1[i].a_name);
			printf("\n Price=%f",b1[i].price);			
		    }
       }
  
}