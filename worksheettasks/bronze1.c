#include <stdio.h>

float circleArea (int radius){
    return 3.14 * radius * radius;
}

int main(){
    int radius;
    printf("What is the radius of the circle? ");
    scanf("%d", &radius);
    printf("Area = %0.2f\n", circleArea(radius));
}