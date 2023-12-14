#include <stdio.h>

int main(){
    float first_number, second_number, result;
    char operator;

    printf("What is your first number: ");
    scanf("%f", &first_number);

    printf("What is your second number: ");
    scanf("%f", &second_number);

    printf("What operation would you like to do, please choose accordingly:\n\t1. '+' to add.\n\t2. '-' to subtract.\n\t3. '*' to multiply.\n\t4. '/' to divide:  ");
    scanf(" %c", &operator);

    if(operator == '+'){
        result = first_number + second_number;
        printf("The sum of %.2f and %.2f is %.2f", first_number, second_number, result);
    }else if(operator == '-'){
        result = first_number - second_number;
        printf("The difference between %.2f and %.2f is %.2f", first_number, second_number, result);
    }else if(operator == '*'){
        result = first_number * second_number;
        printf("The product of %.2f and %.2f is %.2f", first_number, second_number, result);
    }else if(operator == '/'){
        result = first_number / second_number;
        printf("The quotient of %.2f divided by %.2f is %.2f", first_number, second_number, result);
    }else if(!(operator) || (operator != '+' && operator != '-' && operator != '*' && operator != '/')){
        printf("Invalid input as operand, try again");
    }

    getchar();
    return 0;
}