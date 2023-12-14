#include <stdio.h>

int main(){
    int numbersArray[6];
    int sum = 0;

    printf("Hello, these are the first 100 numbers divisible by 3 and 5\n");

    for(int i = 1; i <= 100; i++){
        if(i % 3 == 0 && i % 5 == 0){
            numbersArray[sum] = i;
            sum += 1;
        }
    }

    for(int i = 0; i < sum; i ++){
        printf("\t%d: %d", (i + 1), numbersArray[i]);
    }

    return 0;
}