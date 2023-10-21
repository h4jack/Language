//write a program to check a person is eligible for vote or not by his/her age.

#include <stdio.h>

void main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>17){
        printf("Eligible for vote.");
    }else{
        printf("Not Eligible for vote.");
    }
}