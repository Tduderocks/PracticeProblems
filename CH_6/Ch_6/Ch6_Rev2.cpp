// Chapter 6 Review 2 works:) done space?
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
string ConvertToFirstLast(string FirstLast)
// converts "first last" name to "last,first"
{
    string LastFirst,first,last,length;
    FirstLast.length();
    int TheLength;
    TheLength = FirstLast.length();
    cout << "The first and last name has: " << TheLength << " characters" << endl;
    int number = FirstLast.find(' ');
    last = FirstLast.substr(0,number);
    first = FirstLast.substr(number,TheLength);
    LastFirst = first + last;
    return(LastFirst);
}
int main()
//calls function
{
    cout << ConvertToFirstLast("Theresa Lorello") << endl;
    return(0);
}
    