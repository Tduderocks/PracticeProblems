//Chapter 7 Example 2 works:) done yay
#include <iostream>
using namespace std;
bool IsFactor(int integer1, int integer2)
//returns true if integer 1 is a factor of integer 2
{
    if (integer2%integer1==0){
        cout << " The first is a factor of the second\n";
        return(true);
    }
    else {
        cout << " The first is not a factor of the second\n";
        return(false);
    }
}
int main()
//calls functions
{
    cout << "2 and 8 ";
    IsFactor(2,8);
    cout << "3 and 10";
    IsFactor(3,10);
    cout << "16 and 4";
    IsFactor(16,4);
    return(0);
}