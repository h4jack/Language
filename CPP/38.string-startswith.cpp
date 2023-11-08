//write a funciton to check a string starts with the given string or not.
 
#include<bits/stdc++.h>
using namespace std;

bool startswith(string str1, string str2){
    int l = str2.length();
    for(int i = 0; i < l; i++){
        if(str1[i] != str2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string str = "Susanta";
    string str2 = "Suss";
    if(startswith(str,str2)){
        cout << "Hello";
    }else{
        cout << "Hii";
    }
    return 0;
}