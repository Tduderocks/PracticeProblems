//chapter 6 example 6
#include <iostream>
#include <string>
using namespace std;
char GetChoice(const string &LegalChoices)
/*Forces the user to enter a character in LegalChoices and returns it
  psot : characters in legalchoices returned*/
{
    char choice;
    while (LegalChoices.find(choice)==-1)
    {
        cin >> choice;
    }

    return(choice);
}
int main()
//calls function
{
    cout << "Enter your choice (A,B,or C): ";
    char Choice = GetChoice("ABC");
    cout << Choice;
return(0);    
}