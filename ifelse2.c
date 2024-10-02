//this program checks if the triangle is possible or not
#include<stdio.h>
int main(){
int a,b,c,sum;
printf("Enter sides of triangle:");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
if (sum==180)
{
    printf("it is a triangle");
}else
{
    printf("Oops...triagnle not possible");
}

}