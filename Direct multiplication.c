#include<stdio.h>
int main()
{
int n1,n2,s1,s2,s3,s4,s5,s11,s12,s13,s14,a,b,c,d,a1,b1,c1,d1,a3,b3,c3,d3,a4,b4,c4,d4,s21,s31,s41;
double ans;
printf("enter 2 nos to multiply");
scanf("%d%d",&n1,&n2);
s1=(n1%10);
s2=(n1/10)%10;
s3=(n1/100)%10;
s4=(n1/1000);

printf("the valus are %d\n%d\n%d\n%d\n",s1,s2,s3,s4);
s11=s1*n2;
s12=s2*n2;
s13=s3*n2;
s14=s4*n2;
printf("the values after multipling %d\n%d\n%d\n%d\n",s11,s12,s13,s14);
a=(s11%10);
b=(s11/10)%10;
c=(s11/100)%10;
d=(s11/1000);

printf("the slitting of s11 %d\n%d\n%d\n%d\n",a,b,c,d);
s21=s12+(b*1)+(c*10)+(d*100);
printf("adding the values of b,c with s21 %d\n",s21);
a1=(s21%10);
b1=(s21/10)%10;
c1=(s21/100)%10;
d1=(s21/1000);
printf("the splitting of s21 %d\n%d\n%d\n%d\n",a1,b1,c1,d1);
s31=s13+(b1*1)+(c1*10)+(d1*100);
printf("the value of s31 %d\n",s31);
a3=(s31%10);
b3=(s31/10)%10;
c3=(s31/100)%10;
d3=(s31/1000);


printf("the splitting of s31 %d\n%d\n%d\n%d\n",a3,b3,c3,d3);
s41=s14+(b3*1)+(c3*10)+(d3*100);
printf("the value of s41  %d\n",s41);
a4=(s41%10);
b4=(s41/10)%10;
c4=(s41/100)%10;
d4=(s41/1000);

printf("the splitting of s41 %d\n%d\n%d\n%d\n",a4,b4,c4,d4);
ans=(a*1)+(a1*10)+(a3*100)+(s41*1000);
printf("the resultant value is %lf",ans);
}