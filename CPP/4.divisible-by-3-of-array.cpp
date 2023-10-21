//write a program to find a array or number when we concat as string and chekc from reverse and without reverse check is divisible by 3 or not.
//example: [12,32,48,10] == 12324810 or 10483212 check both divisible check is divisible by 3 or not if yes then return 1 else return 0.

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isPossible(int N, int arr[]) {
        // code here
        int tmp1 = 0;
        int tmp2 = 0;
        for(int i = 0; i < N; i++){
            tmp1 += (arr[i] % 3);
            tmp2 += (arr[N-i] % 3);
        }



        if(tmp1 % 3 == 0 || tmp2 % 3 == 0){
            return 1;
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution ob;
        cout << ob.isPossible(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends