//Write a program to add two numbers using function.
//Function types: Built in, User defined
#include<stdio.h>
int sum(int a,int b);//declaration
int main(){
    int result=sum(5,3);//define
    printf("Sum:%d",result);
    return 0;
}
int sum(int a,int b){//call
    return a+b;
}
