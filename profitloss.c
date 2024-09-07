//this program finds profit or loss for user
#include <stdio.h>
int main() {
    float cp,sp;
    printf("Enter cost price:");
    scanf("%f",&cp);
    printf("Enter selling price :");
    scanf("%f",&sp);
    // sp>cp?printf("Congrats you earned Profit"):printf("You're at loss");
    // you can try out different conditions:
    // sp==cp?
    // cp>sp?
    // sp>=cp?
    // cp<=sp?
    sp>cp?printf("Congrats you earned Profit"):(cp==sp?printf("No Profit No Loss"):printf("Oops You're at Loss"));
    return 0;
}