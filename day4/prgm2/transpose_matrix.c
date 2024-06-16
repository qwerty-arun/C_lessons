#include <stdio.h>
#include <stdlib.h>
void transpose_matrix(int rows, int columns,int arr[rows][columns]);
int main()
{
	int rows,columns;
	printf("Enter the no. of rows and columns of the matrix: \n");
	scanf("%d%d",&rows,&columns);
	if(rows<=0 || columns<=0)
	{
		printf("Enter a valid number!\n");
		exit(0);
	}
	int arr[rows][columns];
	printf("Enter the elements of the matrix: \n");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	printf("The Matrix: \n");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
		printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	transpose_matrix(rows,columns,arr);
	return 0;
}
void transpose_matrix(int rows, int columns, int arr[rows][columns])
{
	printf("The transpose of the matrix: \n");
	if(rows==columns)
	{
		int transpose[rows][rows];
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<columns;j++)
			{
				transpose[i][j]=arr[j][i];
			}
		}
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<rows;j++)
			{
				printf("%d ",transpose[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		int transpose[columns][rows];
		for(int i=0;i<columns;i++)
		{
			for(int j=0;j<rows;j++)
			{
				transpose[i][j]=arr[j][i];
			}
		}
		for(int i=0;i<columns;i++)
		{
			for(int j=0;j<rows;j++)
			{
				printf("%d ",transpose[i][j]);
			}
			printf("\n");
		}
	}
}
