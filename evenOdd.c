#include <stdio.h>

int main(){
    int tested_number;

    printf("Hello there, please give me any integer: ");
    scanf("%d", &tested_number);
    
    tested_number % 2 == 0 
        ?
    printf("%d is an even number", tested_number)
        :
    printf("%d is an odd number", tested_number);
            
    return 0;
}