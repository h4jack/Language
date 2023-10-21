//write a program to check a number is armstrong or not.
#include <stdio.h>
#include <stdbool.h>

bool isArmstrong(int n);

int main(){
    int n;
    printf("Enter Your Number: ");
    scanf("%d",&n);
    if(isArmstrong(n)){
        printf("%d is Armstrong number.",n);
    }else{
        printf("%d is not a Armstrong number.",n);
    }
    return 0;
}
bool isArmstrong(int n){
    if(n<10){
		return 1;
	}
	int sum = 0;
    int n1 = n;
    while(n>9){
        sum += (n%10)*(n%10)*(n%10);
        n /= 10;
    }
    sum+=n*n*n;
    if(sum == n1){
        return 1;
    }else{
        return 0;

    }
}
