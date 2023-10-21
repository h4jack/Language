//write a program to calculate the simple interest of a principle by given interest rate, amount and time.

#include <stdio.h>

void main(){
    float principle, time, rate;
    printf("Enter Principle: ");
    scanf("%f",&principle);
    printf("Enter interest rate per year without %c sign: ",37);
    scanf("%f",&rate);
    printf("Enter time in year: ");
    scanf("%f",&time);
    float interest = (principle*(rate/100))*time;
    printf("The interest of principle %.2f with interest rate of %.2f%c in the year of %.2f is %.2f",principle,rate,37,time,interest);
}