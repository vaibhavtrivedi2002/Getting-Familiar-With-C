//this program shows the use of switch cases 
#include<stdio.h>
int main(){
int a=1,b=2,c=10,d=20;

    switch(a){
        case 1:
        c=a+b;d=a-b;
        printf("%d,%d\n",c,d);
        
        
        case 2:
        c=a*b;d=a/b;
        printf("%d,%d\n",c,d);
        

        default:
        printf("%d,%d",c,d);
    }


}