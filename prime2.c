////Write a program to check whether a given number is prime or not
#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter a number:");
    scanf("%d", &num);
    i = 2;
    while (i <= num - 1)
    {
        if (num % i == 0)
        {
            printf("%d Not a prime number", num);
            break;
        }
        i++;
    }
    if (i == num)
    {
        printf("%d is a Prime Number", num);
    }

    return 0;
}