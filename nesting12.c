//Write a program to print the following pattern.
/*
    ABCDEFFEDCBA
    ABCDE  EDCBA
    ABCD    DCBA
    ABC      CBA
    AB        BA
    A          A
*/
#include<stdio.h>
int main(){
    int i,j,k,l;
    char ch;
    for(i=1;i<=6;i++){
        ch='A';
        for(j=6;j>=i;j--){
            printf("%c",ch);
            ch++;
        }
        for(k=1;k<=2*i-2;k++){
            printf(" ");
        }
        for(l=6;l>=i;l--){
          ch--;
          printf("%c",ch); 
        }
        printf("\n");
    }
    return 0;
}