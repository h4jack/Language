//In this program, we will read divisor and dividend and then find the quotient and remainder, results will be printed on the screen.

#include <stdio.h>

void main(){
    int a,b;
    printf("Enter divident and divisor: ");
    scanf("%d %d",&a,&b);
    printf("The quotent and reminder of the division is :\n");
    printf("Quotient: %d\n",a/b);
    printf("Reminder: %d",a%b);
}