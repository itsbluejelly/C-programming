#include <stdio.h>

// MAIN FUNCTION
int main(){
    // INITIATING VARIABLES
    int sum = 0;

    // A FOR LOOP TO FIND THE SUM EXCLUDING 5
    for(int i = 1; i <= 15; i++){
        if(i == 5){
            continue;
        }

        sum += i;
    };

    // PRINTING OUTPUT
    printf("The sum is: %d", sum);

    return 0;
}