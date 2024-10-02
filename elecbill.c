//this program calculates the electricity bill according to units consumed
#include<stdio.h>
int main(){
    int units,total;
    printf("Enter the number of units consumed:");
    scanf("%d",&units);

if (units<=100){
    total=units*6;
}else if(units<=200){
    total=600+(units-100)*7;
}else if(units<=300){
    total=1300+(units-200)*8;
}else{
    total=2100+(units-300)*9;
}
    printf("Total amount to be paid: Rs.%d",total);
    return 0;
}