//Write a program to print the following pattern.
/*
A
BC
DEF
GHIJ
KLMNO
*/
#include<stdio.h>
int main(){
    int i,j;
    char ch='A';
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
    printf("%c",ch);
    ch++;
        }
        printf("\n");
    }
}