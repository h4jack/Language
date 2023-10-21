// write a program to fund the greatest common divisor of two number.
#include <iostream>
using namespace std;


int gcd(int a, int b);


int main(){
    int a,b;
    cout << "Enter First Number : ";
    cin >> a;
    cout << "Enter Second Number : ";
    cin >> b;
    cout << "The Greatest Common Divisor of " << a << " and " << b << " is " << gcd(a,b)<< endl;
    main();
    return 0;
}

int gcd(int a, int b){
    int arr1[40], arr2[40]; 
    int i;
    int c = 1, d = 1;
    for(i = 0; i <= 40; i++){
        if(a % 7 == 0){
            arr1[i]=7;
            a = a / 7;
        }else if(a % 5 == 0){
            arr1[i] = 5;
            a = a / 5;
        }else if(a % 3 == 0){
            arr1[i] = 3;
            a = a / 3;
        }else if(a % 2 == 0){
            arr1[i] = 2;
            a = a / 2;
        }else {
            arr1[i] = a;
            break;
        }
        
    }
    a = i;
    for(i = 0; i <= 40; i++){
        if(b % 7 == 0){
            arr2[i]=7;
            b = b / 7;
        }else if(b % 5 == 0){
            arr2[i] = 5;
            b = b / 5;
        }else if(b % 3 == 0){
            arr2[i] = 3;
            b = b / 3;
        }else if(b % 2 == 0){
            arr2[i] = 2;
            b = b / 2;
        }else {
            arr2[i] = b;
            break;
        }
        
    }
    b = i;
    
    for(int k = 0; k <= a; k++){
        for(int l = 0; l <= b; l++){
            if(arr1[k] == arr2[l]){
                c = c * arr1[k];
                arr1[k] = arr2[l] = 0;
                break;
            }
        }
    }
    
    return c;
    
    
}