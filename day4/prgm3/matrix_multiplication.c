#include <stdio.h>
#include <stdlib.h>
int main()
{
	int rows1,columns1;
	printf("Enter the no. of rows and columns of the first matrix: \n");
	scanf("%d%d",&rows1,&columns1);
	if(rows1<=0 || columns1<=0)
	{
		printf("Enter a valid number!\n");
		exit(0);
	}
	int arr1[rows1][columns1];
	printf("Enter the elements of the first matrix: \n");
	for(int i=0;i<rows1;i++)
	{
		for(int j=0;j<columns1;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}

	printf("The First Matrix: \n");
	for(int i=0;i<rows1;i++)
	{
		for(int j=0;j<columns1;j++)
		{
		printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	
	int rows2,columns2;
	printf("Enter the no. of rows and columns of the second matrix: \n");
	scanf("%d%d",&rows2,&columns2);
	if(rows2<=0 || columns2<=0)
	{
		printf("Enter a valid number!\n");
		exit(0);
	}

	if(columns1!=rows2)
	{
		printf("Matrix Multiplication NOT possible!\n");
		exit(0);
	}

	int arr2[rows2][columns2];
	printf("Enter the elements of the second matrix: \n");
	for(int i=0;i<rows2;i++)
	{
		for(int j=0;j<columns2;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}

	printf("The Second Matrix: \n");
	for(int i=0;i<rows2;i++)
	{
		for(int j=0;j<columns2;j++)
		{
		printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	int resultant[rows1][columns2];
	for(int i=0;i<rows1;i++)
	{
		for(int j=0;j<columns2;j++)
		{
			int sum=0;
			for(int k=0;k<rows2;k++)
			{
				sum=sum+arr1[i][k]*arr2[k][j];
			}
			resultant[i][j]=sum;
		}
	}
	printf("The Resultant Matrix: \n");
	for(int i=0;i<rows1;i++)
	{
		for(int j=0;j<columns2;j++)
		{
		printf("%d ",resultant[i][j]);
		}
		printf("\n");
	}

	return 0;
}

