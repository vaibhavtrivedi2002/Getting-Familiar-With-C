//this program calculates aggregate and percentage marks
#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5,agr;
    float per;
    printf("Enter the marks off 5 subjects:");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    agr=m1+m2+m3+m4+m5;
    per=agr/5;
    printf("Aggregate Marks:%d\n",agr);
    printf("Percentage:%f\n",per);
}