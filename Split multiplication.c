#include<stdio.h>
int main()
{
float multiplicant,multiplier;
float c,d,e;
printf("enter the multiplier");
scanf("%f",&multiplier);
printf("enter the multiplicant");
scanf("%f",&multiplicant);
c=(multiplicant/2);
d=(c*multiplier);
e=(d+d);
printf("\n the splitted value %f,%f",c,c);
printf("\n the multiplied value %f,%f",d,d);
printf("\n the resultant value is %f",e);
return 0;
}