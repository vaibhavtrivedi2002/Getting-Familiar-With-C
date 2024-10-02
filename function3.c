//Write a program to find factorial of number using function via preprocessor.
#include<stdio.h>
#include"function2.c"
int main(){
    int i,n;
    printf("Enter number:");
    scanf("%d",&n);
    int f=fact(n);
    printf("Factorial:%d",f);
}