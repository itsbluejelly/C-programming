#include <stdio.h>

int main(){
    char character;

    printf("What is your character: ");
    scanf("%c", &character);

    if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')){
        printf("'%c' is an alphabet", character);
    }else if(character >= '0' && character <= '9'){
        printf("'%c' is a digit", character);
    }else{
        printf("'%c' is a special character", character);
    }

    getchar();
    return 0;
}