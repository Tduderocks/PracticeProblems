//chapter 8 review 17 works done:)
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
struct CollegeType {
    string name;
    string state;
    int enrollment;
};
void GetCollegeInfo(CollegeType &College)
//get college info
{
    cout << "what is the name of the college: ";
    cin >> College.name;
    cout << "What state is the college in: ";
    cin >> College.state;
    cout << "what is the engrollement at the school:";
    cin >> College.enrollment;
}
void DisplayCollegeInfo(CollegeType College)
//display college info
{
    cout << College.name << " , " << College.state << " , " << College.enrollment << ".\n";
}
int main()
//call the functions
{
    CollegeType college;
    GetCollegeInfo(college);
    DisplayCollegeInfo(college);
return(0);
}
