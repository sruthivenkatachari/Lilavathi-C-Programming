#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int a[100][100],b[100][100];
int i,j,n;
clrscr();
printf("enter n*n matrix");
scanf("%d",&n);
/*srand(time(NULL));*/
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
a[i][j]=rand();
printf("a%d%d:%d\n",i+1,j+1,a[i][j]);
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
b[i][j]=rand();
printf("b%d%d:%d\n",i+1,j+1,b[i][j]);
}


getch();
}