//Write a program to find factorial using recursion.
#include<stdio.h>
int factorial(int n){
    if(n==0){
        return 1;
    }else{
        return n*factorial(n-1);
    }

}
int main(){
    int num;
if(printf("Enter the number:"))
scanf("%d",&num);
int result=factorial(num);
printf("Factorial of %d: %d",num,result);
    return 0;
}