//Write a program to print all prime numbers from 1 to n.
#include<stdio.h>
int main(){
    int i,n=1;
    printf("Prime numbers between 1-20 are:\n");
    for(n=1;n<=20;n++)
    {
        i=2;
    for(i=2;i<n;i++){
        if(n%i==0)
        break;
    }
    if(i==n)
    printf("%d ",n);
    }
}