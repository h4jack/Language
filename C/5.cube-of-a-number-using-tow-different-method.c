//write a program to print the cube of a number using two different method.

#include <stdio.h>
#include <math.h>

int cube(int);

void main(){
    int a,cube;
    printf("Ether the number: ");
    scanf("%d",&a);
    cube = pow(a,3);
    printf("The cube of %d using pow function is %d\n",a,cube);
    cube = a*a*a;
    printf("The cube of %d without using pow function is %d\n",a,cube);
}