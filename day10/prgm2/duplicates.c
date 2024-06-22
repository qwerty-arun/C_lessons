#include <stdio.h>
#include <string.h>

char* removeDuplicate(char str[], int n)
{
    int index = 0;
    for (int i = 0; i < n; i++) {
	int j;
        for (j = 0; j < i; j++) {
            if (str[i] == str[j])
                break;
        }

        // If not present, then add it to the result.
        if (j == i)
            str[index++] = str[i];
    }

    // Add null character at the end to terminate the string
    str[index] = '\0';

    return str;
}

int main()
{
    char str[] = "geeksforgeeks";
    int n = sizeof(str) / sizeof(str[0]);
    printf("%s\n", removeDuplicate(str, n));
    return 0;
}

