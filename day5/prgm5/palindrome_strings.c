#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void palindrome(char str[]);
int main()
{
	char str1[]="malayalam";
	char str2[]="abbc";
	palindrome(str1);
	palindrome(str2);
	return 0;
}

void palindrome(char str[])
{
	int low=0;
	int high=strlen(str)-1;

	while(low < high)
	{
		if(str[low]!=str[high])
		{
		printf("%s is NOT palindrome\n",str);
		exit(0);
		}
		low++;
		high--;
	}
	printf("%s is Palindrome\n",str);
}
