//Chapter 6 Review 1 works:)
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
void WriteFirstLast(string LastFirst)
//Provide Last,First. Produce First,Last
{
    string first, last;
    string lenght;
    int TheLength;
    LastFirst.length();
    TheLength = LastFirst.length();
    cout <<"The first and last name has: " << TheLength << " character" << endl;
    cout << "The first name has: " << LastFirst.find(',')<< " characters " << endl;
    int number = LastFirst.find(',');
    last = LastFirst.substr(0,number);
    first = LastFirst.substr(number+1,TheLength);
    cout << first << " " << last << endl;
}
int main()
// Calls function
{
    WriteFirstLast("Lorello,Theresa");
return(0);
}