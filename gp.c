//Write a program to display the GP: 1,2,4,8,16 upto n terms.
//hint: GP=a*r^n-1
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of terms:");
    scanf("%d",&n);
    int a=1;
    for (int i=1;i<=n;i++)
    {
        printf("%d ",a);
        a=a*2;
    }
    
}