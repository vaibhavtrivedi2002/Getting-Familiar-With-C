// WAP to check wheather a number is odd or even using switch case.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch (num % 2)
    {
    case 0:
        printf("%d is even.\n", num);
        break;
    case 1:
        printf("%d is odd.\n", num);
        break;
    default:
        printf("Unexpected case.\n");
        break;
    }
    return 0;
}
