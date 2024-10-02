//Write a program to find average of three numbers using function.
#include<stdio.h>
float avg(int, int, int);
float avg(int a,int b,int c){
float avg=(a+b+c)/3.0;
return avg;
}
int main(){
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    float result=avg(a,b,c);
    printf("Average:%f\n",result);
}