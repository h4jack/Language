//write a program to print the largest among three number.

#include <stdio.h>

void main(){
    int a,b,c;
    printf("Enter three number: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && c<b){
        printf("%d is largest.",b);
    }else if(c<a){
        printf("%d is largest.",a);
    }else{
        printf("%d is largest.",c);
    }
}