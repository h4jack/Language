//program to save student details in array and print them in cpp
#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    float total, obt,per;
    float mark(float total,float obt) {
        return obt * 100 / total;
    }
};

int main()
{
    string name;
    int roll,total,obt;
    class Student s[5];

    for(int i = 0; i<5; i++) {
        cout << "Now enter name roll total_marks obtain_marks of "<<i+1<<" : ";
        cin>>name;
        cin >> roll;
        cin >> total;
        cin >> obt;
        s[i].name = name;
        s[i].roll = roll;
        s[i].total = total;
        s[i].obt = obt;
        s[i].per = s[i].mark(total,obt);
    };
    //now print all students details
    for(int i = 0; i<5; i++) {
        cout << i+1 <<". Name  " << s[i].name << endl;
        cout << i+1 <<". Roll  " << s[i].roll << endl;
        cout << i+1 <<". Total " << s[i].total << endl;
        cout << i+1 <<". Obtained " << s[i].obt << endl;
        cout << i+1 <<". Persentage " << s[i].per << endl << endl;
    };
    return 0;
}