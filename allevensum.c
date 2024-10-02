//Write a program to sum all the even digits of a given number.
#include<stdio.h>
int main(){
    int n=564,d,sum=0;
while(n!=0)
{
    d=n%10;
    if(d%2==0)
    sum=sum+0;
    n=n/10;
}
printf("Sum of all even digits:%d",sum);
}