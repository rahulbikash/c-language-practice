#include<stdio.h>
int main()
{
	int a[4][4],i,j;
	printf("Enter the matrix form :\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("first row left to right :\n");
	for(i=0;i<4;i++)
	{
		printf("%d ",a[0][i]);
	}
	printf("\nlast colum top to button :\n");
	for(i=0;i<4;i++)
	{
		printf("%d\n",a[i][3]);
	}
	printf("\nlast row right to left : \n");
	for(i=3;i>=0;i--)
	{
		printf("%d ",a[3][i]);		
	}
	printf("\nfirst column buttom to top : \n");
	for(i=3;i>=0;i--)
	{
		printf("%d\n",a[i][0]);	
	}
	
	
	
}