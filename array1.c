//Write a program to print largest element in an array.
#include<stdio.h>
int main(){
    int max,n;
    int a[5]={23,76,89,54,33};
    max=a[0];
    for(int i=1;i<=5;i++){
        if(max<a[i])
        max=a[i];
    }
    printf("Largest element in the given array:%d",max);
    
}