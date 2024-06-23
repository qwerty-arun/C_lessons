#include <stdio.h>

void printUpToN(int N) {
    int i = 1;
    while (i <= N && printf("%d\n", i++)) {
        // Empty body
    }
}

int main() {
    int N = 10;  // Change this value to print up to a different number
    printUpToN(N);
    return 0;
}

