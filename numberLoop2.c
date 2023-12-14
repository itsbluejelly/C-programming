#include <stdio.h>

int main(){
    int numbersArray[50];
    int sum = 0;

    printf("Hello, these are the even numbers between 50 and 100\n");

    for(int i = 51; i < 100; i ++){
        if(i % 2 == 0){
            numbersArray[sum] = i;
            sum += 1;
        }
    }

    for(int i = 0; i < sum; i ++){
        printf("\t%d: %d", (i + 1), numbersArray[i]);
    }

    return 0;
}