//Write a program in cpp to sort a array
#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the size of the arrray: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Now Enter the array elements";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}