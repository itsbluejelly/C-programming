#include <stdio.h>

int main(){
    float first_number, second_number, sum;

    printf("What is your first number: ");
    scanf("%f", &first_number);

    printf("What is your second number: ");
    scanf("%f", &second_number);

    sum = first_number + second_number;
    printf("The sum of the first number %.3f and the second number %.3f is %.3f", first_number, second_number, sum);

    return 0;
}