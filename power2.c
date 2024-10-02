//Write a program to find the value of one number raised to the power of another.
#include<stdio.h>
int main(){
int a,b,pow=1;
printf("Enter the base:");
scanf("%d",&a);
printf("Enter the exponent:");
scanf("%d",&b);
for(int i=1;i<=b;i++){
    pow=pow*a;
}
printf("%d^%d:%d\n",a,b,pow);
}
