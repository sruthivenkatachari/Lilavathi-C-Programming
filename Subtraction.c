#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("enter the 1st value to subtract");
scanf("%d",&a);
printf("enter the 2nd value to subtract");
scanf("%d",&b);
c=b-1;
d=c-a;
e=d+1;
printf("before substraction %d \n",c);
printf("after subs %d \n",d);
printf("the resultant subracted value is %d",e);
}