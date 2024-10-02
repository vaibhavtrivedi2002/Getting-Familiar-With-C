#include<stdio.h>
void increment(){
    static int a=1;
    printf("%d",a);
    a++;
}
int main(){
    increment();
    increment();
    increment();
}
