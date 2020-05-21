//chapter 6 example 5 ?
#include <iostream>
#include <string>
#include <stdlib.h>
#include <chrono>
#include <conio.h>
using namespace std;
void GetInt()
//gets an integer from the user.
{
    string s;
    cout << "enter an integer: ";
    cin >> s;
    cout << "The number is : " << (atoi(s.c_str()));

}
void GetDouble()
//gets a double from the user
{
    string t;
    cout << "Enter a double : ";
    cin>> t;
    cout << "The number is : " << (atof(t.c_str()));
}
int main()
// call the functions
{
    GetInt();
    GetDouble();
    return(0);
}