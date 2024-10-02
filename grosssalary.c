/*If his basic salary is less than Rs.1500 then HR=10% of basic salary and DA=90% of basic salary. 
If his salary is either equal or above Rs.1500 then HR=500 and DA=98% of basic salary. 
Write a programme to find his gross salary.*/
#include<stdio.h>
int main(){

    float bs,gs,da,hra;
    printf("Enter the Basic Salary:");
    scanf("%f",&bs);
    if(bs<1500){
        hra=bs*10/100;
        da=bs*90/100;
    }else{
        hra=500;
        da=bs*98/100;
    }
    gs=bs+hra+da;
    printf("Gross Salary:Rs.%f\n",gs);
}