//chapter 10 review 11 works:)
#include <iostream>
#include "dateclass.h"
using namespace std;
int main()
{
    DateClass Today, MyBirthday(1,3,98);
    cout << "Enter today's date: ";
    cin >> Today;
    if (Today==MyBirthday){hh
        cout << "Hooray! " << Today << " is my birthday! " << endl;
    }
    else{
        cout << "Hooray! " << Today << " is my Un-Birthday! " << endl;
    }
    return(0);
}
// 1/5/98 and 01/05/98 are considered the same which is good because they are the same