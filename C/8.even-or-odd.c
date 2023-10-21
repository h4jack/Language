//write a program to check a number is even or odd.

#include <stdio.h>

void main(){
    printf("Enter a number: ");
    int a;
    scanf("%d",&a);
    if(a%2==0){
        printf("Number is Even.");
    }else{
        printf("Number is Odd.");
    }
}