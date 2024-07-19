#include <stdio.h>
union test{
	char c;
	int i;
};
int main()
{
	union test t;
	t.c='A';
	printf("%c\n",t.c);
	t.i=66;
	printf("%d\n",t.i);
	printf("%c\n",t.c);
	printf("%u\n",&(t.c));
	printf("%u\n",&(t.i));
}
