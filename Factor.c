#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,i,j,k=0,b[25],u=0,a[25],c[25],l,g;
    clrscr();
    printf("Enter two positive integers: ");
    scanf("%d %d",&n1,&n2);
 printf("Factors of %d are: ",n1);
 printf("factors of %d are: ",n2);


    for(i=1; i<=n1; i++)
    {
	if (n1%i==0)
	{
	    printf("the factors of 1st integers is%d\n",i);
	for(k=1;k<=1;k++)
    {
    a[k]=i;

      printf("a[] value is%d\n",a[k]);
    }
    }
    }



    for(j=1;j<=n2;j++)
    {
       if(n2%j==0)
      {
	printf("the factors of 2nd integer is%d\n",j);
	 for(u=1;u<=1;u++)
	 {
	  b[u]=j;
	 /*;*/
	  }
	  printf("b[] value is%d\n",b[u]);
	}
     }
      /*if(a[k]!=b[u])
    {

    printf("the a[k] value is %d\n",a[k]);
    break;

      }
    else
    {
    printf("error");
    break;
    } */






    getch();
}