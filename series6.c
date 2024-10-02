//2 3 5 8 12 17 23 30
#include<stdio.h>
int main(){
int i,a,b;
a=2,b=1,i=0;
while(i<8){
    printf("%d\n",a);
    a=a+b;
    b++;
    i++;
}

}