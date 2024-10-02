//Write a program to add values of two arrays.
#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int b[5]={1,3,1,2,2};
    int c[5];
    for(int i=0;i<=4;i++){
    printf("%d\n",b[i]);
    }
for(int i=0;i<=4;i++){
    c[i]=b[i]+a[i];
printf("%d ",c[i]);
}
}