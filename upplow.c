//this program checks whether the given alphabet is in Uppercase or Lowercase
#include<stdio.h>
int main(){

    char c;
    printf("Enter character:");
    scanf("%c",&c);
    if(c>='A'&&c<='Z'){
        printf("Uppercase");
    }else if(c>='a'&&c<='z'){
         printf("Lowercase");
    }else
    printf("Not an Eglish Alphabet ");
}