#include <stdio.h>

int main(){
    int sum =0;

    printf("Here is the sum of the even numbers between 1 and 10: ");

    for(int i = 1; i < 10; i ++){
        if(i % 2 == 0){
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}