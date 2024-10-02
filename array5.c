// Write a program to search an element in array.
#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int i,element=4;
    int search=0;
    for(i=0;i<6;i++){
        if(element==a[i]){
            search=1;
            printf("Element %d found at %d index\n",element,i);
            break;
        }
    }
    if(search==0){
        printf("Element not found");
    }
    return 0;
}