//function to print the table of a number.
#include <iostream>
using namespace std;

void printTable(int a);

int main(){
    int a;
    cout << "Enter your number: ";
    cin >> a;
    printTable(a);
    return 0;
}

void printTable(int a){
    if(a < 1001){
        for(int i = 1; i <= 10; i++){
            cout << a << " " << i << " " << a*i << endl;
        }
    }else{
        cout << "input limit is 1000 please enter less of it.";
    }
}