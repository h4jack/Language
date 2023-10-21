//write a program to calculate the area of a circle of a given radius.
#include <stdio.h>
#define PI 3.14159265

int main(){
    printf("Enter the radius of the circle: ");
    float r;
    scanf("%f",&r);
    printf("The Area of the Circle which radius is %f is %f",r,PI*(r*r));
    return 0;
}