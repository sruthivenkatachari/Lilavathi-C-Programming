#include<stdio.h>
int main()
{
	int n1,n2,flag=0,a,a1[25],b,i,k,n,c[50],d[50],s,h,g,e,e1;
	printf("enter the multiplier and multiplicant");
	scanf("%d%d",&n1,&n2);
	for(i=2;i<=n1/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(n1==1)
	printf("not a primeor composite");
	if(flag==0)
	printf("prime cannot be proceded");
	else
	{
		a=n1;
		printf("the numbe is composite %d\n",a);
	}
	for(i=0;i<a;i++)
	{
		if(a%i==0)
		{
			printf("the factors of composite are%d\n",i);
			for(k=1;k<=1;k++)
			{
				a1[k]=i;
				printf("the a[k] value is %d\n",a1[k]);
			}
		}
	}

	for(i=0;i<=sizeof(a1);i++)
	{
		for(h=0;h<=sizeof(a1);h++)
		{
			if((a1[i]*a1[h])==45)
			{
				e=(a1[i]*n2);
				e1=(e*a1[h]);
				printf("the ans is %d\n",e1);
			}
		}
	}
}