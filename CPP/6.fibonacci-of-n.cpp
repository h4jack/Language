// writer a program to calculate fibonacci of n term where n is given by user.
//librery/header file including 
#include <iostream>
using namespace std;

// class for calculating fibonacci 
class Fibonacci{
    public:
    double fibonacci(int n){
        if(n == 0 || n == 1){
            return n;
        }else if(n == -1){
            return 1;
        }else{
            if(n >= 0){
                return fibonacci01(n);
            }else if((n < 0) && (n % 2) == 0){
                return fibonacci01(n*-1)*-1;
            }else{
                return fibonacci01(n*-1);
            }
        
        }
    }

    double fibonacci01(int n){
        double f1, f2, f3, a;
        f1 = 0;
        f2 = 1;
        if(n == f1){
            return 0;
        }else if(n == f2){
            return 1;
        }else{
            for(int i = 2; i <= n; i++){
                f3 = f1 + f2;
                cout << "The Fibonacci of " << i << " is " << f3 << endl;
                f1 = f2;
                f2 = f3;
            }
        }
        return f3;
    }
};

int main(){
    Fibonacci myFibo;
    int n;
    cout << "Enter your number : ";
    cin >> n;
    cout << "The Fibonacci of " << n << " is " << myFibo.fibonacci(n) << endl;
    main();
    return 0;
}