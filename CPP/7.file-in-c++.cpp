//write a cpp program to perform basic file operation.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string line;

    ofstream myfile;
    myfile.open("new.txt");
    myfile << "Hello i am Susanta Mandi";
    myfile.close();
    myfile.open("new.txt");
    myfile << "This should be second line";
    myfile.close();

    ifstream myfile2 ("new.txt");
    if(myfile2.is_open()){
        while(!myfile2.eof()){
            getline (myfile2,line);
            cout << line << endl;
        }
        myfile2.close();
    }else{
        cout << "new.txt not found";
    }
    cout << __DATE__;
    return 0;
}