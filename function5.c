//Write a program to find area and perimeter of rectangle using function.
//The program written below uses Call by Value approach.

#include<stdio.h>
float area(float a, float b);
float perimeter(float a, float b);
float area(float a, float b){
float area;
area=a*b;
return area;
}
float perimeter(float a, float b){
float perimeter;
perimeter=2*(a+b);
return perimeter;
}
int main(){
    float l,b,a,p;
    printf("Sides of rectangle:");
    scanf("%f%f",&l,&b);
    a=area(l,b);
    p=perimeter(l,b);
    printf("Area:%f Perimeter:%f",a,p);
}