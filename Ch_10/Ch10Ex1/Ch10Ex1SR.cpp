//chapter 10 excersise 1 student record program using a class
#include <iostream>
#include<string>
#include <vector>
// #include <conio.h>
using namespace std;
StudentClass::StudentClass()                        //default constructo
    {
        Last = " ";
        First = " ";
        Year = 0;
    }
StudentClass::StudentClass(string last, string first, int year)      //constucto
    {
        Last = last;
        First = first;
        Year = year; 
    }
void StudentClass:: Read()                              //gets arguments from class
//reads last name first name and year
{
    cout << "Enter last name: ";
    cin >> Last;
    cout << "Enter first name: ";
    cin >> First;
    cout << "Enter class: ";
    cin >> Year;
}
void StudentClass:: Write()
//writes out last name first naem and year
{
    cout << First << " " << Last << " " << Year << endl;
}