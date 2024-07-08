#include <stdio.h>
int main()
{
	float a=7.9999;
	float *b,*c;
	b=&a;
	c=b;
	printf("%d %d %d %d",a,*(&a),*b,*c);
	int i=7;
	printf("%f",i);
	return 0;
}
