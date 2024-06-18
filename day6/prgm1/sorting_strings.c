#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char str[4][8]={"Alpha","Beta","Delta","Code"};
	int size = sizeof(str)/sizeof(str[0]);
	printf("The given array is: \n");
	for(int i=0;i<size;i++)
		printf("%s\t",str[i]);
printf("\n");	
	for(int i=0;i<size;i++)
	{
		char temp[8];
		for(int j=i+1;j<size;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	printf("The sorted array: \n");
	for(int i=0;i<4;i++)
     {
	printf("%s ",str[i]);
	}
	printf("\n");
	return 0;
}
