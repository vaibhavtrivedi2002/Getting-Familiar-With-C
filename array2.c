//Write a program to reverse an array.
#include<stdio.h>
int main(){
    int temp,n;
    int a[3]={3,2,1};
    for(int i=0;i<=3/2;i++){
    temp=a[i];
    a[i]=a[3-1-i];
    a[3-1-i]=temp;
    }
    printf("Reversed array:");
    for (int i=0;i<=2;i++)
    {
    printf("%d ",a[i]);
    }
    
}