//Write a program to find the factorial of a number.
#include<stdio.h>
int main(){

    unsigned int num,i,fact;
    printf("Enter a number:");
    scanf("%d",&num);
    fact=i=1;
    while(i<=num){
        fact=fact*i;
        i++;
    }
    printf("Factorial of %u:%u\n",num,fact);
}