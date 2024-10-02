#include<stdio.h>
int main(){
    int a=1,b=2,c,d,e;
    b=a++%5;
    c=a--*++b;
    d=++c>b++==a--;
    printf("%d,%d,%d,%d",a,b,c,d);
}