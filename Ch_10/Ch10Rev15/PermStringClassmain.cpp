#include <iostream>
#include "PermanentStringClass.h"
using namespace std;
int main(){
    //testing permenant string class
    PermanentStringClass Test;
    String NewString;
    Test.Display();
    cout << "Enter a new string: ";
    getline (cout, NewString);
    Test.Replace(NewString);
    Test.Display();
}