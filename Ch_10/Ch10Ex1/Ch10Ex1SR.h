//Student Records class program
#include <iostream>
#include <string>
using namespace std;
class StudentClass {
    public:
    StudentClass(); //defalut constructor
    StudentClass(string last, string first, int year); // constructor
    void Read();
    //read input
    void Write();                   //field: propertiy
    //write input
    private:
    string Last;                    //dif. from paramters of constructor
    string First;
    int Year;
};
#include "Ch10Ex1SR.cpp"