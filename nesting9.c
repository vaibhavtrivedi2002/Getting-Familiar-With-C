//Write a program to print the following pattern.
/*
1
23
456
78910
1112131415
*/
#include<stdio.h>
int main(){
    int i,j;
    int x=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
    printf("%d",x);
    x++;
        }
        printf("\n");
    }
}