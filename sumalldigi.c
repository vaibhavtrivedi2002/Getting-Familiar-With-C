//Write a program to sum all the digits of a given number.
#include<stdio.h>
int main(){
    int n,d,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
while(n!=0)
{
    d=n%10;
    sum=sum+d;
    n=n/10;
}
printf("Sum of all digits:%d",sum);
}