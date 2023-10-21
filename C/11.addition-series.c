//WAP to compute the sum of the first n terms of the following series S =1-2+3-4+5…………….
#include <stdio.h>

int main(){
    int n,a = 0;
    printf("Enter your number : ");
    scanf("%d",&n);
    for(int i = 1; i <= n;i++){
        a = a + i;
    }
    printf("%d",a);
    return 0;
}