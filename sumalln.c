//Write a program to sum all the natural numbers, also print the numbers in reverse.
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter number:");
    scanf("%d",&n);
    int sum=0;
    for (i=1;i<=n;i++){
    sum=sum+i;
    }
     printf("Sum:%d\n",sum);
     //for printing numbers in reverse order
     for (i=n;i>=1;i--)
     {
        printf("%d\n",i);
     }
     
    
}