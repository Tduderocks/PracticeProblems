//chapter 6 example 2 works done:)
#include <iostream>
#include <string>
using namespace std;
string Reverse(string InputWord)
// Reverses a word
{
    string reversed;
    int length = InputWord.length();
    cout << "the length is : " << length << endl;
    for(int i=(length-1);i>=0;i--){
    reversed = InputWord.substr(i,1);
    cout << reversed << endl;
    }
return(reversed);
}
int main()
// calls Reverse function
{
    string Input;
    cout << "Enter your phrase to reverse: ";
    getline(cin,Input);
    Reverse(Input);
    return(0);
}
