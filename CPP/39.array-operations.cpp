#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool searchEle(vector<int>& a, int x) {
        // code here
        int n = a.size();
        for(int i = 0; i < n; i++){
            if(a[i] == x){
                return 1;
            }
        }
        return 0;
    }

    void insertEle(vector<int>& a, int y, int yi) {
        // code here
        int n = a.size();
        int i = yi;
        for(; i < n; i++){
            int tmp = a[i];
            a[i] = y;
            y = tmp;
        }
        a.push_back(y);
    }

    bool deleteEle(vector<int>& a, int z) {
        // code here
        int n = a.size();
        int i = 0;
        for(; i < n; i++){
            if(a[i] == z){
                break;
            }
        }
        if(i >= n){
            return 0;
        }
        for(; i < n-1; i++){
            a[i] = a[i+1];
        }
        return 1;
    }
};

int main(){
    vector<int> a = {1,2,3,4,5};
    for(int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    insertEle(a, 4, 2);
    for(int i = 0; i < 6; i++){
        cout << a[i] << " ";
    }
    return 0;
}