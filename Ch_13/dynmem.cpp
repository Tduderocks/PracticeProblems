/*dynamic memory demonstraction program*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string *p; // declare a pointer to a string
    p = new string; // allocates memory for the string
    (*p) = "Sandburg"; // store data at the location pointed to by p
    cout << (*p) << endl; //display data at location pointed to by p
    delete p; //deallocated the memory pinted to by p
    return 0;
}
