#include<stdio.h>
void india();
void japan();
void india(){
    printf("I'm an Indian\n");
}
void japan(){
    printf("Japan\n");
}
int main(){
    printf("I'm in main\n");
    india();
    japan();
}

