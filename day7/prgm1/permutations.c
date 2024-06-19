#include <stdio.h> 
#include <string.h> 
  
void swap(char* x, char* y) 
{
    char temp; 
    temp = *x; 
    *x = *y; 
    *y = temp;
} 

void permute(char* a, int l, int r) // string, starting index of string, ending index of string 
{ 
    int i; 
    if (l == r) 
        printf("%s\n", a); 
    else { 
        for (i = l; i <= r; i++) { 
            swap((a + l), (a + i)); 
            permute(a, l + 1, r); 
            swap((a + l), (a + i)); // backtrack 
        } 
    } 
} 

int main() 
{ 
    char str[] = "ABCD"; 
    int n = strlen(str); 
    permute(str, 0, n - 1); 
    return 0; 
}
