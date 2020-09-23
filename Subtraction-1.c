#include<stdio.h>
int main()
{
int first,second,c2,d2,e2;
printf("enter the 1st value to subtract");
scanf("%d",&first);
printf("enter the 2nd value to subtract");
scanf("%d",&second);
c2=second-1;
d2=c2-first;
e2=d2+1;
printf("the value after subtraction is%d",e2);
return 0;
}