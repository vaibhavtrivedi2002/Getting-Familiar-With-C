//this program finds which number is graeter
#include <stdio.h>
int main() {
    float a,b,G;
    printf("Enter number a:");
    scanf("%f",&a);
    printf("Enter number b:");
    scanf("%f",&b);
    // a>b?printf("%f is greater",a):printf("%f is greater",b);
    G=a>b?a:b;
    printf("%f is greater",G);
}