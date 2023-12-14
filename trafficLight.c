#include <stdio.h>

int main(){
    char colour;

    printf("Enter a character of:\n1. R for Red\n2. Y for Yellow\n3. G for Green\n4. A for Amber: ");
    scanf("%c", &colour);

    switch (colour){
        case 'r':
        case 'R':
            printf("stop");
            break;
        case 'y':
        case 'Y':
        case 'A':
        case 'a':
            printf("wait");
            break;
        case 'g':
        case 'G':
            printf("go");
            break;
        default:
            printf("Wrong colour");
    }
    return 0;
}