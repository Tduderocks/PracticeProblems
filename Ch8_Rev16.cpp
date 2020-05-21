//chapter 8 ex16
#include <iostream>
#include <string>
using namespace std;
struct StudentType{
    string Last;
    string first;
    char middleInitial;
    int Class;
};
void GetStudentData(StudentType &Student)
//get values for a student
{
    cout <<"Enter last name: ";
    cin >> Student.Last;
    cout << "Enter first name: ";
    cin >> Student.first;
    cout << "Enter middle initial: ";
    cin >> Student.middleInitial;
    cout << "Enter the class: ";
    cin >> Student.class;
}
void DisplayStudentData(StudentType &Student)
//display data
{
    cout << Student.first << " " << Student.middleInitial << " " << Student.Last << " " << "\t" << Student.class;
}
int main()
{
    GetStudentData(StudentType);
    DisplayStudentData(StudentType);
    return(0);
}