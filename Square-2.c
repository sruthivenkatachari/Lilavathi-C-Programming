#include<stdio.h>
#include<math.h>
int main()
{
long long a,b,c;
double ans;
printf("enter the number to find its square root");
scanf("%lld",&a);
printf("enter any number");
scanf("\n%lld",&b);
c=((a+b)*(a-b)+(b*b));
printf("the c value is %lld\n",c);
ans=c;
printf("the square is %f\n",ans);
return 0;
}