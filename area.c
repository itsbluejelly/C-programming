#include<stdio.h>
#define PI (22/7)

int main(){
    int area_circle, radius;
    printf("Enter the radius: ");
    scanf("%d", &radius);

    area_circle = PI * radius * radius;
    printf("The area of your circle is: %d", area_circle);
    return 0;
}