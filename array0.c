//Array is a collection of homogenous data.
//Syntax: data_type array_name[Size];

//Write a Program to store 5 numbers from user, find the sum off all the numbers.
#include<stdio.h>
int main(){
    int arr[5],i,sum=0;
    printf("Enter 5 numbers:");
    for(i=0;i<=4;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=4;i++){
    sum=sum+arr[i];
    }
    printf("Sum:%d ",sum);
}