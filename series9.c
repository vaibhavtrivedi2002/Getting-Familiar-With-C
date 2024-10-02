//1-2+3-4+5-6+.....n
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0)
        sum=sum-i;
        else
        sum=sum+i;
    }
    printf("Sum:%d",sum);
}