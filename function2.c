//Write a program to print factorial of a number using function.
// #include<stdio.h>
int fact(int);
int fact(int n){
    int i,f=1;
    for(i=1;i<=n;i++){
       f=f*i;
    }
return (f);
}
int main(){
    int i,n;
    printf("Enter number:");
    scanf("%d",&n);
    int f=fact(n);
    printf("Factorial:%d",f);
}
