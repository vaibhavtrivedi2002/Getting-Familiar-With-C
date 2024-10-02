//this program calculates division of students on the basis of their percentage
#include <stdio.h>
int main() {
    int subject1, subject2, subject3, subject4, subject5;
    float total;
    float percentage;
    printf("Enter marks for 5 subjects:\n");
    printf("Subject 1: ");
    scanf("%d", &subject1);
    printf("Subject 2: ");
    scanf("%d", &subject2);
    printf("Subject 3: ");
    scanf("%d", &subject3);
    printf("Subject 4: ");
    scanf("%d", &subject4);
    printf("Subject 5: ");
    scanf("%d", &subject5);
    
    total = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (float)total/5;

    printf("Total Marks: %d\n", total);
    printf("Percentage: %f\n", percentage);
    if (percentage >= 60) {
        printf("Division: First\n");
    } else if (percentage >= 50) {
        printf("Division: Second\n");
    } else if (percentage >= 40) {
        printf("Division: Third\n");
    } else {
        printf("Division: Fail\n");
    }
    return 0;
}
