#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int c[100][100],d[100][100],b[100][100],a[100][100],a1[100][100],f[100][100],g[100][100],h[100][100],i,j,n;
int normal(int a[100][100],int n);
int lilavathi(int a[100][100],int n);
int main()
{
printf("enter the n*n matrix");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
a[i][j]=rand()%100;
printf("a%d%d:%d/n",i+1,j+1,a[i][j]);
}
}
/*clock_t start,end;
double cpu_time_used;
start=clock();*/
normal(a,n);
/*end=clock();
cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
printf("the normal cube took %lf seconds to execute\n",cpu_time_used);
clock_t st,en;
double time_used;
st=clock();*/
lilavathi(a,n);
/*en=clock();
time_used=((double)(en-st))/CLOCKS_PER_SEC;
printf("lilavathi cube took %lf seconds to execute\n",time_used);    */
return 0;
}
int normal(int a[100][100],int n)
{
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
a1[i][j]=(a[i][j]*a[i][j]*a[i][j]);
}
}
printf("\ncube of normal matrix is :\n\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a1[i][j]));
if(j==n-1)
{
printf("\n\n");
}
}
}
}
int lilavathi(int a[100][100],int n)
{
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{

b=((a[i][j])%10);
}
}
printf("\ncube ofb matrix is :\n\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",b[i][j]));
if(j==n-1)
{
printf("\n\n");
}
}
}
}