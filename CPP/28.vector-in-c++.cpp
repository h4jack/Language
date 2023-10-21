//in this program vector of cpp and all the operation of vector are showed.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> num1 = {1,2,3,4,5};
    vector<int> num2{1,2,3,4,5};
    vector<int> num3(5,12);

    //print all elements of num vector.
    for(const int &i : num1){
        cout << i << " ";
    }
    cout << "\n";

    for(const int &i : num2){
        cout << i << " ";
    }
    cout << "\n";

    for(const int &i : num3){
        cout << i << " ";
    }
    cout << "\n";

    //adding element to a vector
    num1.push_back(6);
    num2.push_back(7);

    //print all elements of num vector.
    for(const int &i : num1){
        cout << i << " ";
    }
    cout << "\n";

    for(const int &i : num2){
        cout << i << " ";
    }
    cout << "\n";

    //getting element of a vector by index
    cout << num1.at(0) << "\n";
    cout << num2[3]  << "\n";

    //change element of vector
    num1.at(1) = 8;
    num2[4] = 15;

    //print all elements of num vector.
    for(const int &i : num1){
        cout << i << " ";
    }
    cout << "\n";

    for(const int &i : num2){
        cout << i << " ";
    }
    cout << "\n";

    //delete element of vector
    num1.pop_back();

    //print all elements of num vector.
    for(const int &i : num1){
        cout << i << " ";
    }
    cout << "\n";

    //size of a vector 
    cout << num1.size() << "\n";

    //delete all elements of a vector
    num1.clear();

    for(const int& i: num1){
        cout << i;
    }

    //return first element of a vector
    cout << num2.front() << "\n";

    //return last element of a vector
    cout << num2.back() << "\n";

    //return true/1 if vector is empty like num1
    cout << num1.empty() << "\n";

    //check the overal size of a vector
    cout << num2.capacity();
    return 0;
}