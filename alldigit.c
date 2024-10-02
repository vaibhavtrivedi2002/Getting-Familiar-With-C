//Write a program to print all the digit of a number.
/*
564%10=
56/10=
*/
#include<stdio.h>
int main(){
int n=564,d;
while(n!=0)
{
    d=n%10;
    printf("%d\n",d);
    n=n/10;
}

}