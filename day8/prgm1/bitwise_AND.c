# include <stdio.h>
int main()
{
	int left=5,right=7;
	int and=1;
	for(int i=left;i<=right;i++)
	and=left & (left+1);
	printf("%d \n",and);
}
