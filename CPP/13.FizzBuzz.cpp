//Write a program that prints the number 1 to 100. But for multiplies of Three, print Fizz insead of the Number, and multiplies of five, print Buzz. For numbers that aere multiples of both three and five, print FizzBizz. 
#include <iostream>
using namespace std;

int main(){
    for(int i = 1; i<=100;i++){
        if((i%3)==0 && (i%5)==0){
            cout << "FizzBuzz";
        }else if((i%3)==0){
            cout << "Fizz";
        }else if((i%5)==0){
            cout << "Buzz";
        }else{
            cout << i;
        }
        cout << "\n";
    }
    return 0;
}