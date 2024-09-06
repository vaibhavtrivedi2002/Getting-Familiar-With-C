//program to find area/perimeter of rectangle
#include"stdio.h"
int main(){
float l,b,ar,per;
printf("Enter the sides of rectangle:");
scanf("%f%f",&l,&b);
ar=l*b;
per=2*(l+b);
printf("Area:%f\n",ar);
printf("Perimeter:%f\n",per);
return 0;
}