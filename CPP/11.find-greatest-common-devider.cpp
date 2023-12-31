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

int gcd(int x, int y) {
    int g = y;
    while (x > 0) {
        g = x;
        x = y % x;
        y = g;
    }
    return g;
}