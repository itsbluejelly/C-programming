#include <stdio.h>

int main(){
    int sum =0;

    printf("Here is the sum of the even and odd numbers for first 100 natural numbers: ");

    for(int i = 1; i <= 100; i ++){
        sum += i;
    }

    printf("%d", sum);

    return 0;
}