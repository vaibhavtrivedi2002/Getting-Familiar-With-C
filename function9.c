//Write a program to print reverse of a number using function(Call by Value).
#include<stdio.h>
int reverse(int num){
    int d,r=0;
    while (num!=0)
    {
        
        d=num%10;
        r=(r*10)+d;
        num=num/10;
    }
    return r;
    
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int result=reverse(num);
    printf("Reverse of the number is:%d",result);
}