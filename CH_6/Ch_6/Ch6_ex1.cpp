//Chapter 6 Excersise 1 a: works:) b:works:) part c - requires gotoxy.
#include <iostream>
#include <string>
using namespace std;
string RotateOne(string phrase)
//Takes a string parameter and returns it with one character moved from left to right
{
cout << "the length is " << phrase.length() << endl;
int length = phrase.length();
string CompletePhrase;
for (int i = 1; i<=10; i++){
string FirstPiece,SecondPiece;
FirstPiece = phrase.substr(i,length);
SecondPiece = phrase.substr(0,i);
CompletePhrase = FirstPiece + " " + SecondPiece;
cout << CompletePhrase << endl;
}

return(CompletePhrase);
}
int main()
//calls the  function
{
    string phrase;
    cout << "Enter the prase you would like to display";
    getline(cin,phrase);
    RotateOne(phrase);
    return 0;
}