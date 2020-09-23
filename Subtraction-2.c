#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("enter the 1st value to subtract");
scanf("%d",&a);
printf("enter the 2nd value to subtract");
scanf("%d",&b);
if(a!=NULL&&!=NULL)
{
ones=(b%10);
tens=(b/10)%10;
hund=(b/100)%10;
thou=(b/1000);
one=ones-1;
c=one+tens+hund+thou;
d=c-a;
one=(d%10);
ten=(d/10)%10;
hun=(d/100)%10;
tho=(d/1000);
e=one+1;
printf("the subtraction value is%d",e);
}
else
{
printf("error");
}
}

printf("/n the value after subtraction is%d",e2);
}
else
{
printf("there is some error");
}
return 0;
}