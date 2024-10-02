//Pointer is a variable that stores memory address of another variable.
// Syntax: data_type *pointer_name;
//P2P: It is a variable which stores address of a pointer.
#include<stdio.h>
int main(){
int age=22;
int *ptr=&age;
printf("%u",&age);
return 0;
// int _age=*ptr;
// printf("%d",_age);
}