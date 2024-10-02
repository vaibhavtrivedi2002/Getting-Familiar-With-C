/*While purchasing certain items a discount of 10% is offered if the quantity purchased is more than 1000.
Write programme to calculate the total expenses*/
#include<stdio.h>
int main(){
    int qty, dis;
    float rate,tot;
    printf("Enter the quantity:");
    scanf("%d",&qty);
    printf("Enter the rate:");
    scanf("%f",&rate);
    if (qty>1000)
    {
        dis=10;
    }else{
        dis=0;
    }
    tot=(qty*rate)-(qty*rate*dis/100);
    printf("Total expenses:%f\n",tot);
}