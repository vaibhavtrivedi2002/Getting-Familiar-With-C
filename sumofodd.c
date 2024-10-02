//this program prints sum of all odd/even numbers between 100 and 200.
#include<stdio.h>
int main(){
    auto int i=100,sum;
    sum=0;
    while(i<=200){
        if(i%2!=0)
        // if(i%2==0)
        sum=sum+i;
        i++; 
    }
    printf("Sum:%d",sum);
}