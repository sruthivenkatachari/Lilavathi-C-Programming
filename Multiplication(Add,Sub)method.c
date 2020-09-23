#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,n1,len,div,d1,div1,e,g,h,j,s;
long long ad,su;

clrscr();
printf("enter the multiplier,multiplicant");
scanf("%d%d",&n,&n1);
len=log10(n1);
printf("the len value is %d\n",len);
div=pow(10,len);
printf("the div value is %d\n",div);
d1=(n1-div);
printf(" the value ofd1 is %d\n",d1);
div1=(div*len);
printf("the div1 value is %d\n",div1);
e=(n1-div1);
printf("the valueof the e is %d\n",e);
printf("the addition method\n");
g=(div*n);
printf("the g value is %d\n",g);
h=(d1*n);
printf("the h value is %d\n",h);
ad=g+h;
printf("the addition multiplication is %lld\n",ad);
printf("the subtraction method\n");
j=(div1*n);
printf("the j value is %d\n",j);
s=(e*n);
printf("the s value is %d\n",s);
su=j+s;
printf("the subtraction multiplication is %lld\n",su);
getch();
}