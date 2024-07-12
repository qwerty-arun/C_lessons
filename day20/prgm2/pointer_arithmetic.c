#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // pointer to the first element of the array
	printf("----------POINTER ARITHMETIC USING INTEGER ARRAYS----------\n");
    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
        // printf("*(ptr + %d) = %d\n", i, ptr[i]); This produces the same result as above
    }
    ptr+=3; //incrementing operation
    printf("\nAfter incrementing by 3, ptr points to: %d\n", *ptr);
	printf("\n----------POINTER ARITHMETIC USING STRING ARRAYS----------\n");
	 char str[] = "Hello, World!";
    char *pt = str; // pointer to the first character of the string

    printf("String using pointer arithmetic:\n");
    while (*pt != '\0') {
        printf("%c ", *pt);
        pt++;
    }
    printf("\n");
	printf("\n----------ILLUSTRATING POINTER SUBTRACTION----------\n"); 
 int *ptr1 = arr; 
    int *ptr2 = arr+4; 
    int difference = ptr2 - ptr1;
    printf("Number of elements between ptr1 and ptr2: %d\n", difference);	
	return 0; 
}

