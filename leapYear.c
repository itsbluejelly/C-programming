#include <stdio.h>

int main(){
    int leap_year;

    printf("What is your year: ");
    scanf("%d", &leap_year);

    if(leap_year % 4 == 0){
        printf("%d is a leap year", leap_year);
    }else{
        printf("%d is not a leap year", leap_year);
    }

    getchar();
    return 0;
}