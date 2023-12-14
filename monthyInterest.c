#include <stdio.h>

int main(){
    int period_months;
    
    printf("How long are you planning to invest in the bank: ");
    scanf("%d", &period_months);

    if(period_months < 6){
        printf("Your monthly interest rate is five percent");
    }else if(period_months >= 6 && period_months < 12){
        printf("Your monthly interest rate is six percent");
    }else if(period_months >= 12 && period_months < 36){
        printf("Your monthly interest rate is eight percent");
    }else if(period_months >= 36 && period_months < 60){
        printf("Your monthly interest rate is nine percent");
    }else{
        printf("Your monthly interest rate is ten percent");
    }
    
    getchar();
    return 0;
}