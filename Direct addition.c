#include<stdio.h>
int main()
{
int n,n1,ones,tens,hundreds,thousands,one,ten,hundred,thousand,a,b,c,d,a1,b1,c1,d1,e;
printf("enter the first number to be added");
scanf("%d",&n);
printf("enter the second number to be added");
scanf("%d",&n1);
ones=(n%10);
tens=(n/10)%10;
hundreds=(n/100)%10;
thousands=(n/1000);
one=(n1%10);
ten=(n1/10)%10;
hundred=(n1/100)%10;
thousand=(n1/1000);
a=ones+one;
b=tens+ten;
c=hundreds+hundred;
d=thousands+thousand;
a1=a*1;
b1=b*10;
c1=c*100;
d1=d*1000;
e=a1+b1+c1+d1;
printf("the answer is%d",e);
return 0;
}