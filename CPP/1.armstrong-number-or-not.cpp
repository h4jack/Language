//write a program to check a number is armstrong or not.
#include <iostream>
using namespace std;

bool isArmstrong(int n);

int main(){
    int n;
	cout << "Enter Your Number: ";
	cin >> n;
    if(isArmstrong(n)){
		cout << n << " is a Armstrong Number";
    }else{
        cout << n << " is not a Armstrong Number";
    }
    return 0;
}
bool isArmstrong(int n){
    if(n<10){
		return 1;
	}
	int sum = 0;
    int n1 = n;
    while(n>9){
        sum += (n%10)*(n%10)*(n%10);
        n /= 10;
    }
    sum+=n*n*n;
    if(sum == n1){
        return 1;
    }else{
        return 0;

    }
}
