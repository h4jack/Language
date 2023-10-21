//Create a structure Student containng fields for Roll No., Name, Class, Year and Total Marks. Create 10 students and store them in a file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student{
  int roll;
  string name;
  int student_class;
  int year;
  float total_marks;
};

int main(){
    Student student[10];
    student[0] = {1,"Susanta Mandi",2,2023,137};
    student[1] = {2,"Ajim Premji",2,2023,187};
    student[2] = {3,"Radhakishan Damani",2,2023,174};
    student[3] = {4,"Rakesh JhunJhunWala",2,2023,5000};
    student[4] = {5,"Goutam Adani",2,2023,191};
    student[5] = {6,"Mukesh Ambani",2,2023,190};
    student[6] = {7,"Ratan Tata",2,2023,189};
    student[7] = {8,"Harshad Meheta",2,2023,147};
    student[8] = {9,"Charles Babuge",2,2023,155};
    student[9] = {10,"Warren Buffat",2,2023,197};
    
    ofstream student_details;
    student_details.open("student_details.txt");
    student_details << "************Student Details************\n\n\n";
    for(int i = 0; i < 10; i++){
        student_details << "**********\n*Serial No: " << i+1 << endl;
        student_details << "*Roll No: " << student[i].roll << endl;
        student_details << "*Name: " << student[i].name << endl;
        student_details << "*Class: " << student[i].student_class << endl;
        student_details << "*Year: " << student[i].year << endl;
        student_details << "*Total Marks: " << student[i].total_marks << endl << "********** \n\n" << endl;
        
    }
    student_details.close();

    string student_dtlstring;
    ifstream student_details2 ("student_details");
    if(student_details2.is_open()){
        while(!student_details2.eof()){
            getline(student_details2,student_dtlstring);
            cout << student_dtlstring << endl;
        }
        student_details2.close();
    }else{
        cout << "No File Exist with that file name";
    }


    return 0;
}