//write a program to check a number is armstrong or not.

#include <iostream>
using namespace std;

bool isArmstrong(long);
long pow(int, int);
int numLen(long);

int main(){
    long n;
	cout << "Enter Your Number: ";
	cin >> n;
    if(isArmstrong(n)){
		cout << n << " is a Armstrong Number";
    }else{
        cout << n << " is not a Armstrong Number";
    }
    return 0;
}
bool isArmstrong(long n){
    if(n < 1){
        return 0;
    }else if(n<10){
		return 1;
	}
	long sum = 0;
    int len = numLen(n);
    long n1 = n;
    while(n>9){
        sum += pow((n%10),len);
        n /= 10;
    }
    sum+=pow(n,len);
    if(sum == n1){
        return 1;
    }else{
        return 0;

    }
}

long pow(int a, int b){
    long pow = 1;
    for(int i = 0; i < b; i++){
        pow *= a;
    }
    return pow;
}

int numLen(long a){
    int len = 0;
    while(a>0){
        len++;
        a = a/10;
    }
    return len;
}