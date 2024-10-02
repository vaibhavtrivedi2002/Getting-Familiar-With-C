// Write a program to print if a number is Pallindrome or not.
#include <stdio.h>
int main()
{
    int n, d, a, s = 0;
    printf("Write a number:");
    scanf("%d", &n);
    a = n;
    while (a != 0)
    {
        d = a % 10;
        s = s * 10 + d;
        a = a / 10;
    }

    printf("Reverse of number:%d\n", s);
    if (s == n)
    {
        printf("Pallindrome");
    }

    else
    {
        printf("Not a Pallindrome");
    }
}