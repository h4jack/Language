//write a program to find a year is leap year or not
#include <stdio.h>
int main(){
    printf("Enter the year: ");
    int year;
    scanf("%d",&year);
    if(year%4==0){
        printf("The year %d is Leap Year", year);
    }else{
        printf("The year %d is not a Leap Year", year);
    }
    return 0;
}