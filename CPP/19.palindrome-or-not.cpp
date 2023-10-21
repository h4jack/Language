//write a program to check a number is palindrom or not.
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int y = 0;
        int n = x;
        loop:
            y = (y * 10) + (x % 10);
            x = x / 10;
        if(x >= 1)
        goto loop;
        return y == n;
    }
};

int main(){
    Solution s;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(s.isPalindrome(n)){
        cout << n << " is a Palindrome number.";
    }else{
        cout << n << " is not a Palindrome number.";
    }
    return 0;
}