// A PROGRAM TO GENERATE FIBONACCI SEQUENCE
#include <stdio.h>

// A FUNCTION THAT GENERATES FIBONACCI NUMBERS
void fibonacci_generator(int list_length){
    if(list_length < 0){
        printf("The series length must be a positive number");
        return;
    }

    int unsigned fibonacci_series[list_length];

    // ADDING 1ST AND 2ND NUMBERS TO THE SERIES LIST
    if(list_length == 0){
        printf("Your fibonacci series is empty");
        return;
    }else if(list_length == 1){
        fibonacci_series[0] = 1;
    }else{
        fibonacci_series[0] = 1;
        fibonacci_series[1] = 1;

        if(list_length > 2){
            // GENERATING A FIBONACCI SERIES
            for(int i = 2; i < list_length; i++){
                fibonacci_series[i] = fibonacci_series[i - 1] + fibonacci_series[i - 2];
            }
        }
    }

    // SHOWING THE NUMBERS IN THE SEQUENCE
    printf("Your series has these numbers: ");

    for(int i = 0; i < list_length; i++){
        printf("%u, ", fibonacci_series[i]);
    }
}

// MAIN FUNCTION
int main(){
    // DEFINING VARIABLES
    int series_length;

    // GETTING LENGTH OF SERIES AND INITIATING LIST
    printf("How many numbers would you like the fibonacci series to have: ");
    scanf("%d", &series_length);

    fibonacci_generator(series_length);
    
    return 0;
}