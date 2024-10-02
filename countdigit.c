//Write a program to print total number of digits in a number.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("Total number of digits are: %d",count);
}