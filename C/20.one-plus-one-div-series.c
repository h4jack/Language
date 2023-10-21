//WAP to compute the sum of the first n terms of the following series S = 1+1/2+1/3+1/4+……
#include <stdio.h>

int main(){
    printf("Enter Your Number : ");
    int n;
    double a = 0,i = 1;
    scanf("%d",&n);
    loop:
    a = a + 1/i;
    i += 1;
    if(i<n){
        goto loop;
    }
    //a = 0.5;
    printf("%lf",a+2);
    return 0;
}