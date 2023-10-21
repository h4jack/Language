//write a program to reverse a string given by the user.
#include <iostream>
using namespace std;

int main(){
    string revstr;
    cout << "Enter Your String:" << endl;
    cin >> revstr;
    char temp;
    int len = revstr.length()-1;
    for(int i = 0;i<(revstr.length()/2);i++){
        temp = revstr[i];
        revstr[i] = revstr[len];
        revstr[len] = temp;
        len--;
    }
    cout << revstr;
    return 0;
}