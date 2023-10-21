//write a program to find the matching values in two array.
#include <iostream>
using namespace std;

int main(){
        cout << "Enter The size of two array: ";
        int a, b;
        cin >> a;
        cin >> b;
        int  arr1[a];
        int  arr2[b];
        cout << "Enter the Value of array 1: ";
        for(int i = 0; i < a; i++){
            cin >> arr1[i];
        }
        cout << "Enter the value of array 2: ";
        for(int i = 0;i < b; i++){
            cin >> arr2[i];
        }

        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                if(arr1[i] == arr2[j]){
                    
                    cout << arr1[i] << " in " << i+1 << " no position of Array 1 is equels to " << arr2[j] << " in " << j+1 << " no position of Array 2" << endl;
                }
            }
        }
        return 0;
    }