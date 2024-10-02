//Write a program to illustrate the 2d array.
//1 3 5 7
//3 6 9 4
//6 8 2 4
#include<stdio.h>
int main(){
    // int a[2][3]={2,5,6,9,5,6,8};
    int a[2][3]={{2,5,6},{5,6,8}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\n",a[i][j]);
        }
    }
}