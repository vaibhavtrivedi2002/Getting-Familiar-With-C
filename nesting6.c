//Write a program to print the following pattern.
/*
A
AB
ABC
ABCD
ABCDE
*/
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
    printf("%d",j);
        }
        printf("\n");
    }
}
