// PROGRAM TO FIND FACTORIAL OF A NUMBER
#include <stdio.h>

// A FUNCTION TO GENERATE FACTORIAL
void factorial_generator(int factorized_number){
    int factorial = 1;

    // CHECKING VALIDITY OF INPUT
    if(factorized_number < 1){
        printf("Sorry, the number must be greater than or equal to one");
        return;
    }

    // A FOR LOOP TO GET FACTORIAL
    for(int i = 1; i <= factorized_number; i++){
        factorial *= i;
    }

    // PRINTING OUT THE FACTORIAL
    printf("The factorial of %d is: %d", factorized_number, factorial);
}

// MAIN FUNCTION
int main(){
    // DEFINING VARIABLES
    int input_number;

    // GETTING USER INPUT AND STORING IT AS INPUT NUMBER
    printf("Write any number from 1 onwards of which you would like to find it's factorial: ");
    scanf("%d", &input_number);

    factorial_generator(input_number);

    return 0;
}