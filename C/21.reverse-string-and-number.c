//WAP to reverse a number.
#include <stdio.h>
#include <string.h>

void revnum();
void revstring();

int main(){
    printf("for Reverse Enter\n1. for string \n2. for number \n");
    char c;
    scanf("%c",&c);
    if(c == '1'){
        revstring();
    }else if(c == '2'){
        revnum();
    }else{
        printf("Wrong input please restart the program");
    }
    return 0;
}

// finction to reverse a number given by the user
void revnum(){
    printf("Enter your number : ");
    int n,a = 0;
    scanf("%d",&n);

    //reversing the number given by the user
    loop:
        a = (a*10) + (n%10);
        n = n/10;
    if(n>=1)
    goto loop;
   
    printf("%d",a);
}

//function to reverse a string
void revstring(){
    char str[40];
    printf("Enter your string without space and length should be <=40 : ");
    scanf("%s",&str);


    //calculating the length of the string 
    int len;
    for(int i = 0;;i++){
        if(str[i] == '\0'){
            len = i-1;
            break;
        }
       
    }

    // Reversing the string given by the user
    char temp;
    for(int i = 0;i<(len/2);i++){
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        len--;
    }
    printf("%s \n",str);
}