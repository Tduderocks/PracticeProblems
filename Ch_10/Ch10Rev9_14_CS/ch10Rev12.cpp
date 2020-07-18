//chapter 10 review 12 
// how do you call the less than greater than operator? does not work
#include <iostream>
#include "dateclass.h"
using namespace std;
int main()
{
    DateClass Birthday1, Birthday2;
    cout << "Enter first person's birthday : ";
    cin >> Birthday1;
    cout << "Enter second person's birthday: ";
    cin >> Birthday2;
    if (Birthday1==Birthday2){
        cout << "Person 1 and person 2 are the same age" << endl;
    }
    else if(Birthday1>Birthday2) {
        cout << "Person 1 is older " << endl;
        
    }
    else{
        cout << "Person 2 is older \n";
    }
    return(0);
}