//Write a program to find area and peremeter of sqaure using function.
#include<stdio.h>
float area(int side){
    return side*side;
}
float perimeter(int side){
    return 4*side;
}
int main(){
    int side;
printf("Enter the side of square:");
scanf("%d",&side);
float ar=area(side);
float per=perimeter(side);
printf("Area:%f,Peimeter:%f",ar,per);
}