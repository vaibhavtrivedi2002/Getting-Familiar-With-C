//Write a program to copy one array into another, print the array respectively.
#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int b[5]={1,3,1,2,2};
    for(int i=0;i<=4;i++){
    printf("%d\n",b[i]);
    }
    for(int i=0;i<=4;i++){
    b[i]=a[i];
    printf("%d ",b[i]);
}
}
