#include<stdio.h>
#include<math.h>
int main()
{
int n,len,div,div1;
long int b,a;
long int ans1;
printf("enter the number to find its square");
scanf("%d",&n);
len=log10(n);
div=pow(10,len);
div1=(div*len);
b=(n-div1)%10;
printf("the b value is %ld\n",b);
a=(n-b);
printf("the a value is %ld\n",a);
ans1=(a*a)+(b*b)+(2*a*b);
printf("the square is %ld\n",ans1);
return 0;
}