#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

void printDuplicateCharacters(char* str) {
    // Array to keep track of character counts
    int count[MAX_CHAR] = {0};
    
    // Calculate the frequency of each character in the string
    for (int i = 0; str[i]; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Print duplicate characters and their counts
    printf("Duplicate characters and their counts:\n");
    for (int i = 0; i < MAX_CHAR; i++) {
        if (count[i] > 1) {
            printf("%c: %d\n", i, count[i]);
        }
    }
}

int main() {
    char str[20]="geeksforgeeks";

    // Remove newline character if present
    size_t length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    printDuplicateCharacters(str);

    return 0;
}
