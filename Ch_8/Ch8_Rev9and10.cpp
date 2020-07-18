//chapter 8 review 9 and 10 works and works :) done:)
#include <iostream>
#include <string>
#include <vector>
using namespace std;
string  Reverse (string phrase)
//reverses a string using arrays
{
    string word;
    for(int Letter = phrase.length()-1; Letter>=0; Letter --){
        word+=phrase[Letter];
    }
    return(word);
}
string Uppercase(string S)
//determines if strings are the same regaurdless of case
{
    for(int Letter=0; Letter<S.length(); Letter++){
        if ((S[Letter]>='a')&&(S[Letter]<='z')){
            S[Letter] = S[Letter] - 'a' + 'A';
        }
    }
    return(S);
    } 

bool isPalendrom(string word)
//determines if something is a palidrome
{
    string reversed = Reverse(word);
    if(Uppercase(word)==word){
        word = Uppercase(word);
    }
    return Uppercase(word) == Uppercase(reversed);
}
int main()
//calls function
{
    string phrase;
    cout << "Enter a word to be reversed: ";
    cin >> phrase;
    // cout << Reverse(phrase);
    if(isPalendrom(phrase)){
        cout << phrase << " is a palendrome";
    }
    else{
        cout << phrase << " is not a palendrome";
    }
    return(0);
}