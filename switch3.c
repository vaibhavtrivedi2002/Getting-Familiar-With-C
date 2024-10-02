//this program prints whether the gievn alphabet is vowel or consonant using switch cases
#include<stdio.h>
int main(){
    char c;
printf("Enter the alphabet:");
scanf("%c",&c);
switch(c){
        
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
      printf("Vowel");
      break;

    default:
    if(c>='a'||'A'&&c<='z'||'Z'){
        printf("%c is a Consonant",c);
    }else{
        printf("%c is not an alphabet",c);
    }

    return 0;
}
}