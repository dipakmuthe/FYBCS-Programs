//currency notes
#include<stdio.h>
void main()
{
    int rs,t,f;
    printf("Enter the amount:");
    scanf("%d",&rs);

    t=rs/10;
    rs=rs%10;
    f=rs/5;
    rs=rs%5;

    printf("\n TEn rupees notes=%d",t);
    printf("\n Five rupees notes=%d",f);
    printf("\n one rupees notes=%d",rs);
    return 0;
}