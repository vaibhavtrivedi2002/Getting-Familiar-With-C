//Write a program to find the sum of the following series using function.
//1^1+2^2+3^3......+n!
#include<stdio.h>
#include<math.h>
int calculate(int n){
    int sum=0;
for (int i=1;i<=n;i++)
{
    sum=sum+pow(i,i);
}
return sum;
}
int main(){
    int n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    int result=calculate(n);
    printf("Sum of the series is:%d",result);
    return 0;
}