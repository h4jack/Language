//write a program to find the sum and average of two number in c.
#include <stdio.h>

void main(){
    float a,b;
    printf("Enter two number: ");
    scanf("%f %f",&a,&b);
    printf("The sum of %.2f and %.2f is %.2f\n",a,b,a+b);
    printf("The average of %.2f and %.2f is %.2f",a,b,(a+b)/2);
}