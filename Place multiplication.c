#include<stdio.h>
int main()
{

int o,t,h,th,n1,n2;
long long a1,a2,a3,a4,ans;
printf("enter the n1 and n2");
scanf("%d%d",&n1,&n2);
o=(n2%10);
t=(n2/10)%10;
h=(n2/100)%10;
th=(n2/1000);
printf("after splitting of is %d\n%d\n%d\n%d\n",o,t,h,th);
a1=(o*n1);
a2=(n1*t);
a3=(n1*h);
a4=(n1*th);
printf("the values after multipling is %lld\n%lld\n%lld\n%lld\n",a1,a2,a3,a4);
ans=a1+(a2*10)+(a3*100)+(a4*1000);
printf("the ans is %lld",ans);
return 0;
}