//write a program to print all ascii char.

#include <stdio.h>

void main(){
    printf("ASCII\nCODE --> CHAR    CODE --> CHAR    CODE --> CHAR    CODE --> CHAR\n");
    for(int i = 33; i <= 126; i++){
        printf("%4d --> %4c    ",i,i);
        if(i%4==0){
            printf("\n");
        }
    }
}