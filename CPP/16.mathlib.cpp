//write a basic program to create basic math functions.
#include <iostream>
using namespace std;

int pow(int a,int b);
double max(double a, double b);
double min(double a, double b);

int main() {
    double a, b;
    cout << "Enter First Number : ";
    cin >> a;
    cout << "Enter Second Number : ";
    cin >> b;
    cout << "The Maximum Value is " << max(a,b);
}

int pow(int a,int b) {
    int c = a;
    for(int i = 1; i < b; i++) {
        c = c * a;
    }
    return c;
}

double max(double a, double b) {
    if(a < b) {
        return b;
    } else if(a > b) {
        return a;
    } else {
        return 0;
    }
}

double min(double a, double b) {
    if(a < b) {
        return a;
    } else if(a > b) {
        return b;
    } else {
        return 0;
    }
}