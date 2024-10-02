//Write a program to print sum of all numbers between 1 to n.
/*
Storage classes in C:
>Automatic(auto)
>External(extern)
>Register(register)
>Static(static)
*/
#include<stdio.h>
int main(){
    auto int i=1,sum;
    sum=0;
    while(i<=5){
        sum=sum+i;
        i++; 
    }
    printf("%d",sum);
}