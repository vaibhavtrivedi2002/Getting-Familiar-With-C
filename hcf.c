//Write a program to find HCF/GCD of a given number
#include<stdio.h>

int main() {
    int i, n1, n2, min, gcd = 1; 
    printf("Enter Numbers: ");
    scanf("%d %d", &n1, &n2); 
    min = n1 < n2 ? n1 : n2;
    for (i = 1; i <= min; i++) {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }
    printf("GCD: %d\n", gcd);
    return 0;
}

