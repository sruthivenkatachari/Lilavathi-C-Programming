/*header files*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*global variable*/
int c1[100][100],d1[100][100],e1[100][100],f1[100][100],g1[100][100],c[100][100],e[100][100],n,a[100][100],b[100][100],i,j;
/*function declaration*/
int normal(int a[100][100],int n);
int lilavathi(int a[100][100],int b[100][100],int n);
/*main*/ 
int main()
{
        
        /*reading n*n value*/
	printf("enter the n*n value");
	scanf("%d",&n);
        /*generating a random value for "a" matrix*/
        for(i=0;i<n;i++)
            {
		for(j=0;j<n;j++)
		{
                  a[i][j]=rand()%1000;
                  printf("a%d%d:%d\n",i+1,j+1,a[i][j]);
		}
            }
        /*generating a random value for "b" matrix*/
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=rand()%1000;
			printf("b%d%d:%d\n",i+1,j+1,b[i][j]);
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
        printf("normal square method took:%lf seconds\n",(double)(cpu_time_used));
        
        /*to find clock time for lilavathi function*/
        clock_t st,en;
        double time_used;
        st=clock();
        
        /*function call*/
        lilavathi(a,b,n);
        en=clock();
        time_used=((double)(en-st))/CLOCKS_PER_SEC;
       
        printf("lilavathi addition took %lf seconds \n",(double)(time_used));
	return 0;
}/*end for main*/
/*read function definition*/
int normal(int a[100][100],int n)
{
        /*normal addition*/
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
                        
			c[i][j]=a[i][j]*a[i][j];
                        
		}
	}
      /*normal method display*/  
	printf("\nsum of normal matrix is:\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);
			if(j==n-1)
			{
				printf("\n\n");
			}
		}
	}
}
/*display function definition*/
int lilavathi(int a[100][100],int b[100][100],int n)
{
       
       /*lilavathi addition*/
       for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c1[i][j]=((a[i][j]+b[i][j])*(a[i][j]-b[i][j])+(b[i][j]*b[i][j]));
                }
       }
        
	/*ilavathi method display*/
	printf("by ilavathi's addition method\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c1[i][j]);
			if(j==n-1)
			{
				printf("\n\n");
			}
		}
	}




}
