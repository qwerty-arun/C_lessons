#include <stdio.h>
typedef struct student{
int roll_no;
	char name[10];
}Student;
int main()
{
	Student S1,S2;
	struct student S3,S4; // note that both expressions are the same and both can be used.
	return 0;
}
