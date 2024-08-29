#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int IsPalindrome(char *A)
{
	int i=0,j =strlen(A)-1;
	while(i<j && A[i] == A[j])
	{
		i++;
		j--;
	}
	if(i<j)
	{
		printf("Not a palindrome!\n");
		return 0;
	}
	else
	{
		printf("Palindrome!\n");
		return 1;
	}
}

int main()
{
	char str[10] = "ababXbaba";
	int a =	IsPalindrome(str);
}
