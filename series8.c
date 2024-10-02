//200 100 50 25 upto n terms
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of terms:");
    scanf("%d",&n);
    float a=200;
    for (int i=1;i<=n;i++)
    {
    printf("%.2f ",a);
    a/=2;
    }
    
}