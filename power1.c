//Write a program to find the value of one number raised to the power of another.
#include<stdio.h>
int main(){
float x,pow;
int y,i;
printf("Enter the two numbers:");
scanf("%f %d",&x,&y);
pow=i=1;
while(i<=y){
    pow=pow*x;
    i++;
}
printf("%f to the power %d:%f",x,y,pow);
}
