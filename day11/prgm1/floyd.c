#include <stdio.h>
int main()
{
	int rows=6;int no=1;
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d\t",no);
			no++;
		}
		printf("\n");
	}
	return 0;
}
