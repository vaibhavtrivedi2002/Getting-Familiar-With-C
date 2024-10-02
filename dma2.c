//Write a program to use malloc()
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int *p;
printf("Enter the size:");
scanf("%d",&n);
p=(int *)malloc(n*sizeof(int));
printf("Enter all numbers:");
for (int i=0;i<n;i++)
{
    scanf("%d",p+i);
}
printf("Numbers are:");
for (int i=0;i<n;i++)
{
printf("%d ",*(p+i));
}

}