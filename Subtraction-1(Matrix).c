/*header files*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
/*global variables*/
int n,i,j,a[100][100],len[100][100],div2[100][100],div1[100][100],a3[100][100],b3[100][100],d3[100][100],ans2[100][100],e3[100][100],f3[100][100],a4[100][100],b4[100][100],c4[100][100],e4[100][100],f4[100][100],g4[100][100],h4[100][100],i4[100][100],j4[100][100],ans2[100][100];
long int b[100][100],c1[100][100],ans1[100][100],b1[100][100],a1[100][100],c3[100][100];
/*function declaration*/
int normal(int a[100][100],int n);
int lilavathi(int a[100][100],int n);
int method1(int a[100][100],int n);

/*main*/
int main()
{

printf("enter the n*n matrix");
scanf("%d",&n);
/*random value is allocated for n*n matrix*/
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
a[i][j]=rand()%1000;
printf("a%d%d:%d\n",i+1,j+1,a[i][j]);
}
}
/*to find clock time for normal function*/
clock_t start,end;
	double cpu_time_used;
        start=clock();
        /*function call*/
	normal(a,n);
	end=clock();
	cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;

	printf("normal square took %lf seconds to execute\n",cpu_time_used);

	/*to find clock time for lilavathi function*/
	clock_t st,en;
	double time_used;
	st=clock();
        /*function call*/
	lilavathi(a,n);
	en=clock();
	time_used=((double)(en-st))/CLOCKS_PER_SEC;
	printf("lilavathi square method 1 took %lf seconds to execute \n",time_used);
 
        /*to find clock time for method1 function*/
	clock_t sh,eh;
	double used;
	sh=clock();
        /*function call*/
	method1(a,n);
	eh=clock();
	used=((double)(eh-sh))/CLOCKS_PER_SEC;
	printf("lilavathi square method 2 took %lf seconds to execute \n",used); 
        
        
       
return 0;
}
/*read function definition*/
int normal(int a[100][100],int n)
{
        /*normal addition*/
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
                        
			c3[i][j]=a[i][j]*a[i][j];
                        
		}
	}
      /*normal method display*/  
	printf("\nsquare of normal matrix is:\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%ld\t",c3[i][j]);
			if(j==n-1)
			{
				printf("\n\n");
			}
		}
	}
}
/*lilavathi method definition*/
int lilavathi(int a[100][100],int n)
{
    
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{

len[i][j]=log10(a[i][j]);/*to find length of integer*/
div2[i][j]=pow(10,len[i][j]);
div1[i][j]=((div2[i][j])*(len[i][j]));
b[i][j]=((a[i][j])-(div1[i][j]));
b1[i][j]=((b[i][j])%10);
a1[i][j]=a[i][j];
c1[i][j]=((a1[i][j])-(b1[i][j]));
ans1[i][j]=((c1[i][j])*(c1[i][j]))+((b1[i][j])*(b1[i][j]))+(2*(c1[i][j])*(b1[i][j]));


}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%ld\t",ans1[i][j]);
if(j==n-1)
{
printf("\n\n");
}
}
}
 }

int method1(int a[100][100],int n)
{
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
a4[i][j]=(a[i][j]%10);
b4[i][j]=(a[i][j]/10)%10;
c4[i][j]=(a[i][j]/100)%10;
e4[i][j]=(c4[i][j]*c4[i][j]);
f4[i][j]=(2*(c4[i][j])*(b4[i][j]));
g4[i][j]=(2*(a4[i][j])*(c4[i][j]));
h4[i][j]=(b4[i][j]*b4[i][j]);
i4[i][j]=(2*(b4[i][j])*(a4[i][j]));
j4[i][j]=(a4[i][j]*a4[i][j]);
ans2[i][j]=(j4[i][j]*1)+(i4[i][j]*10)+(h4[i][j]*100)+(g4[i][j]*100)+(f4[i][j]*1000)+(e4[i][j]*10000);
}
}

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",ans2[i][j]);
if(j==n-1)
{
printf("\n\n");
}
}
}




}
