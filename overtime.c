/*Write a programme to calculate overtime pay of 10 employees.
Overtime is paid at the rate of Rs.12 per hour for every hour worked above 40 hours.
Assume that employees do not work for fractional part of an hour.*/
#include<stdio.h>
int main(){
float otpay;
int hour,i=1;
while(i<=10){
    printf("Enter the number of hours worked:");
    scanf("%d",&hour);
    if(hour>=40)
        otpay=(hour-40)*12;
    else
        otpay=0;
        printf("Hours:%d\nOvertime pay:%f\n",hour,otpay);
        i++;
    }
}

