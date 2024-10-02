//Write a program to check whether a given number is prime or not
#include<stdio.h>
int main(){
int n,i,flag=0;
printf("Enter a number:");
scanf("%d",&n);
for (int i = 2; i <=n-1 ; i++)
// for (int i = 2; i <=n/2 ; i++)
{
    if (n%i==0)
    {
        flag++;
        break;
}
 }if(flag==0){
       printf("%d is Prime",n); 
    }else{
        printf("%d is not Prime",n);
    }
}