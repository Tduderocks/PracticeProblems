//chapter 9 review 7 works done:)
#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
bool FileExists(const string & FileName)
{
    ifstream InFile;
    InFile.open(FileName.c_str(),std::fstream::in);
    return !InFile.fail();
}
int main()
// call the function to test it
{
    if (FileExists("rev4.txt"))
    cout << "The file exists";
    else {
        cout << "The file doesnt exist ";
    }
    return(0);
}