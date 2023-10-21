//template in c++
#include <iostream>
using namespace std;

template <class T>
T GetMax(T a, T b){
    return (a>b)?a:b;
}

template <class P>
P print(P a){
    cout << a;
}

int main(){
    print("hello");
    return 0;
}