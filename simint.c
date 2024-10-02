//this program calculates simple interest from user input
#include<stdio.h>
int main(){
    int p,n;
    float r,si;
    printf("Enter the values of p,n,r:");
    scanf("%d %d %f",&p,&n,&r);
    si=p*n*r/100;
    printf("%f\n",si);
}
