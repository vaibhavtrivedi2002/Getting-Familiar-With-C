//this program calculates the gross salary of employee
#include<stdio.h>
int main(){

    float bs,da,hra,gs;
    printf("Enter the basic salary:");
    scanf("%f",&bs);
    da=0.4*bs;
    hra=0.2*bs;
    gs=bs+da+hra;
    printf("Basic Salary:%f\n",bs);
    printf("Dearness allowance:%f\n",da);
    printf("House rent allowance:%f\n",hra);
    printf("Gross Salary:%f",gs);

}