#include <stdio.h>
#include <math.h>

int main(){
    float variable_a, variable_b, variable_c, discriminant, root1, root2;

    printf("Suppose you have the quadratic formula:\n\t\tax2+bx+c=0(2 means squared)\n\t1. What is your value for a: ");
    scanf("%f", &variable_a);

    printf("\t2. What is your value for b: ");
    scanf("%f", &variable_b);

    printf("\t3. What is your value for c: ");
    scanf("%f", &variable_c);

    discriminant = pow(variable_b, 2) - (4 * variable_a * variable_c);
    root1 = (-variable_b + sqrt(discriminant)) / (2 * variable_a);
    root2 = (-variable_b - sqrt(discriminant)) / (2 * variable_a);

    if(discriminant < 0){
        printf("Your equation has no real roots, as they are quite complex");
    }else if(discriminant == 0){
        printf("Your equation has 1 root, as they are quite similar, but it is estimated that:\n\t1. First root is: %f\n\t2. Second root is: %f", root1, root2);
    }else{
        printf("Your equation has 2 real roots, as they are quite distinct, but it is estimated that:\n\t1. First root is: %f\n\t2. Second root is: %f", root1, root2);
    }

    return 0;
}