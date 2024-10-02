#include<stdio.h>
int main(){
int a,b,c,max;
printf("Enter number a:");
scanf("%d",&a);
printf("Enter number b:");
scanf("%d",&b);
printf("Enter number c:");
scanf("%d",&c);
// max=a>b?(a>c?a:c):(b>c?b:c);
max=(a>b)&&(a>c)?a:(b>c?b:c);
if (a+b>c)
{
 printf("triangle");
}else{
    printf("not a triangle");
}
    return 0;
}