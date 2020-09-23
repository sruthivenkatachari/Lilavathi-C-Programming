#include<stdio.h>
int main()
{
int divident,divisor,q,r;
printf("enter the divident and divisor");
scanf("%d%d",&divident,&divisor);
q=(divident/divisor);
r=(divident%divisor);
printf("%d this is q\n%d this is r",q,r);
return 0;
}