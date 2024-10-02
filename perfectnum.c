//Write a program to check whether the given number is perfect or not.
/*
Perfet Number: If sum of all the divisors of a number is equal to the the number itself.
*/

#include<stdio.h>
int main(){
int n,i,sum=0;
printf("Enter a number:");
scanf("%d",&n);
for (int i = 1; i <=n/2 ;i++)
{
    if (n%i==0)
    {
        sum=sum+i;
}
 }if(sum==n){
       printf("%d is a Perfect Number",n); 
    }else{
        printf("%d is not a Perfect Number",n);
    }
}