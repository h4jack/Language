// to check if a number is prime
#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int n)
{
    // Corner case
    if(n == 0 or n == 2)
        return true;
    if(n == 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++){
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int a;
    cin >> a;
    cout << isPrime(a);
    return 0;
}