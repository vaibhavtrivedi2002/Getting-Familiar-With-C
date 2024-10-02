//Write a program to print aacii codes along with their alphabets.
#include<stdio.h>
int main(){
    for(int i=65;i<=90;i++){
        char ch=(char)i;
        printf("%c->%d\n",i,ch);
    }
}