#include<stdio.h>
#include<math.h>
int main()
{
int n,n1,len,d1;
float div,rounded;
float g,h,e,j,s; 
printf("\n enter the multiplier and multiplicant");
scanf("%d,%d",&n,&n1);
len=log10(n1);
printf("\n the len value is %d",len);
div=pow(10,len);
printf("\n the div value is %f",div);
rounded=ceil(n1/div)*div;
printf("\n the rounded value is %f",rounded);
d1=(n1-div);
printf("the value of d1 is %d",d1);
e=(n1-rounded);
printf("\n the value of e is %f",e);
printf("\nthe addition method");
g=(div*n);
h=(d1*n);
printf("\n the g value is %f",g);
printf("\n the h value is %f",h);
printf("the subtraction value method \n");
j=(rounded*n);
s=(e*n);
printf("\n the j value is %f",j);
printf("\n the s value is %f",s);
return 0;
}