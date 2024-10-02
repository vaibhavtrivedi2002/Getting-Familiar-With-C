//Write a program to use calloc()
#include<stdio.h>
#include<stdlib.h>
int main(){
    int sum=0,n,*p;
    printf("Numbers to be stored?:");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    printf("Enter all the numbers:");
    for ( int i=0;i<n;i++)
    {
        scanf("%d",p+i);
        sum=sum+*(p+i);
    }
    printf("Sum of all numbers:%d",sum);
    
}