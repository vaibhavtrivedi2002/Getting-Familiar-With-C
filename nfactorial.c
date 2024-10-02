//Write a program to print factorial of n numbers.
#include<stdio.h>
int main(){
    int n,fact=1;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
        printf("The factorial of %d -> %d\n",i,fact);
    }
}