//chapter 8 review 16 works done:)
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
struct StudentType{
    string last;
    string first;
    string middleI;
    int ClassYear;
};
void GetStudentData(StudentType &Student)
/*Gets student data 
  post: returns student data*/
  {
      cout << "Enter last name: ";
      cin >> Student.last;
      cout << "Enter first name: ";
      cin >> Student.first;
      cout << "Enter middle initial ";
      cin >> Student.middleI;
      cout << "Enter class: ";
      cin >> Student.ClassYear;
  }
void DisplayStudentData(StudentType Student)
/*Displays the values of its student type argument
  post: student data is displayed*/
{
    cout << Student.first << " " << Student.middleI << " " << Student.last << "\t" << Student.ClassYear << endl;
}
int main()
//calls function
{
    StudentType student;
    GetStudentData(student);
    DisplayStudentData(student);
    return(0);
}

