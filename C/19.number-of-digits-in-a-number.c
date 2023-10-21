//write a program to find the number of digits present in a number
#include <stdio.h>

int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    int sum = 0;
    while(n>=1){
        sum += 1;
        n /=10;
    }
    printf("The number of digits in number is %d",  sum);
    return 0;
}