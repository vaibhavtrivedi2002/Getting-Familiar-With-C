//this program runs the different operators
#include"stdio.h"
int main(){
    printf("%d\n",5>2+4); //0
    printf("%d\n",10>8>5); //0
    printf("%d\n", 10>8 & 8>5); //1
    printf("%d\n",10 && 15); //1
    printf("%d\n",10 & 15); //10
     printf("%d\n",10 | 15); //15
     printf("%d\n",10 ^ 15); //5
    printf("%d\n",25 >>2); //6
    
}