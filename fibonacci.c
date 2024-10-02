//Write a program to print the Fibonacci Series.
#include <stdio.h>

int main() {
    int i, n = 10, n1 = 0, n2 = 1, next;

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("%d\n%d\n", n1, n2);
    for (i = 1; i <= n - 2; i++) {
        next = n2 + n1;
        printf("%d\n", next);
        n1 = n2;
        n2 = next;
    }
    return 0;
}


