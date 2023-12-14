#include <stdio.h>

int main(){
    float total;

    printf("What are your marks: ");
    scanf("%f", &total);

    if(total > 100 || total < 0 ){
        printf("No marks awarded, reason being: You cheated");
    }else if(total >= 90 && total <= 100){
        printf("Your grade awarded: A\n");
    }else if(total >= 80 && total < 90){
        printf("Your grade awarded: B\n");
    }else if(total >= 70 && total < 80){
        printf("Your grade awarded: C\n");
    }else if(total >= 60 && total < 70){
       printf("Your grade awarded: D\n");
    }else{
        printf("Your grade awarded: E\n");
    }

    return 0;
}