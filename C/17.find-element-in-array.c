//program to find a charector is exist in c
#include<stdio.h>

int findCh(char str[],char ch);

int main()
{
    char str[100],ch;
    printf("Enter the string where you want to find.f")
    fgets(str,100,stdin);
    printf("enter the char you want to find.")
    scanf("%c",&ch);
    findCh(str,ch);
    return 0;
}

int findCh(char str[],char ch) {
    int i;
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i]==ch) {
            printf("character %c present in %s",ch,str);
            return 0;
        }
    }
    printf("character %c is not present in %s",ch,str);
    return 0;
}