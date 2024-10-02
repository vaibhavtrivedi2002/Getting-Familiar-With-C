//Write a program to swap two variables using function.
//The program written below uses Call by Reference approach.

#include<stdio.h>
int swap(int *, int *);
int swap(int *a, int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
    int main(){
    int x,y;
    x=50;
    y=30;
     printf("Before swapping- A:%d, B:%d\n",x,y);
    swap(&x,&y);
    printf("After swapping A:%d, B:%d\n",x,y);
}