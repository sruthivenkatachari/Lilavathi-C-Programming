#include<stdio.h>
int main()
{
int n1,n2,i,a[25],k,b,c;
printf("enter the divident and divisor");
scanf("%d%d\n",&n1,&n2);
for(i=1;i<=n2;i++)
{
if(n2%i==0)
{
printf("the factors is %d\n",i);
for(k=1;k<=1;k++)
{
a[k]=i;
b=(n1/a[k]);
printf("the quotient answer is %d\n",b);
c=(n1%a[k]);
printf("the remainder ans is %d\n",c);
}
}
}
return 0;
}