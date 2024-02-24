#include <stdio.h>
#include <stdlib.h>

int ascii_int(int a){
    if(a < 48 && a > 57){
        return -1;
    }
    return a-48;
}

long ascii_long(long a){
    if(a < 48 && a > 57){
        return -1;
    }
    return a-48;
}

int toInt(char str[]){
    int num = 0;
    int i = 0;
    int bool1 = 1;
    if(str[i] == '-'){
        bool1 = 0;
        i++;
    }
    while(str[i] != '\0'){
        num = (num*10)+ascii_int(str[i]);
        i++;
    }
    if(i > 10){
        printf("long number can't convert to int");
        exit(0);
    }
    if(bool1){
        return num;
    }
    return num*-1;
}

long to_long(char str[]){
    long num = 0;
    int i = 0;
    int bool1 = 1;
    if(str[i] == '-'){
        bool1 = 0;
        i++;
    }
    while(str[i] != '\0'){
        num = (num*10)+ascii_long(str[i]);
        i++;
    }
    if(bool1){
        return num;
    }
    return num*-1;
}

/*
( 40
) 41
* 42
+ 43
- 45
. 46
/ 47
^ 94
*/
int is_operator(int a){
    if(a == 42 || a == 43 || a == 45 || a == 47 || a == 94)
        return 1;
    return 0;
}

void main(){
    char str[100];
    scanf("%s",str);
    long a = to_long(str);
    printf("%ld",a);
}