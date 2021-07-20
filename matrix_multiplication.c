#include<stdio.h>
int main()
{
	 int a[10][10],b[10][10],c[10][10],i,j,k;
   	 printf("Enter the elements of the matrix A : \n");
   	 for(i=1;i<=2;i++)
   	 {
 	   	for(j=1;j<=2;j++)
 	   	{
	   	 	scanf("%d",&a[i][j]);
	   	 }
 	   }
     printf("Enter the elements of the matrix B :\n");
	 for(i=1;i<=2;i++)
	 {
 		for(j=1;j<=2;j++)
 		{
		 	scanf("%d",&b[i][j]);
		 }
 	}  
 	printf("multiplication of two matrix : \n");
 	for(i=1;i<=2;i++)
 	{
	 	for(j=1;j<=2;j++)
	 	{
	 		c[i][j]= 0;
	 		for(k=1;k<=2;k++)
	 		{
		 		c[i][j] = c[i][j] + a[i][k] * b[k][j];
		 	}
	 	}
	 }
	 for(i=1;i<=2;i++)
	 {
 		for(j=1;j<=2;j++)
 		{
		 	printf("%2d\t",c[i][j]);
		 }
		 printf("\n");
 	}
}