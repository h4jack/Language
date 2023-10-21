//write a program to perform matrix and its functions in cpp. 
#include <iostream>
using namespace std;

class Matrix{
    public:
    int matrixArr1[3][3];
    int matrixArr2[3][3];

    public:
    void input(){
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cin >> matrixArr1[i][j];
            }
        }
    }
    void output(){
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cout << matrixArr2[i][j] << " ";
            }
            cout << endl;
        }
    }

    public:
    void sumMatrix(){

    }
    void differMatrix(){

    }
    void prodctMatrix(){

    }
    void transposeMatrix(){
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                matrixArr2[i][j] = matrixArr1[j][i];
            }
        }
    }
    
    public:
    Matrix(){
        cout << "Enter your Matrix" << endl;
    }
    ~Matrix(){
        cout << "Distructor Executed" << endl;
    }

};

int main(){
    Matrix mat;
    mat.input();
    cout << "The Transpose of Matrix is" << endl;
    mat.transposeMatrix();
    mat.output();
    return 0;
}