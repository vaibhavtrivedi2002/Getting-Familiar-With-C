//Write a program to display the AP: 4,7,10,13,16 upto n terms.
//hint: AP=a+(n-1)*d
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of terms:");
    scanf("%d",&n);
    for (int i=4;i<=3*n+1;i=i+3)
    {
        printf("%d ",i);
    }
    
}