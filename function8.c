//Write a program to find the sum of the following series using function.
//1!+2!+......+n!
#include <stdio.h>
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
int sumSeries(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += factorial(i);
    }
    return sum;
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int result = sumSeries(n);
    printf("The sum of the series 1! + 2! + ... + %d! is: %d\n", n, result);
    return 0;
}
