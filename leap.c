//this program checks whether the given year is leap or not
#include<stdio.h>
int main(){
    int year,isLeapYear;
    printf("Enter year:");
    scanf("%d",&year);
    isLeapYear=(year % 4 == 0) ? ((year % 100 != 0) ? 1 : (year % 400 == 0 ? 1 : 0)) : 0;
    //(y%100==0&&y%400==0)||(y%100!0&&y%4==0)?printf("leap"):printf("not leap");
      if (isLeapYear) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}
