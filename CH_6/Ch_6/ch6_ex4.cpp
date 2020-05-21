//chapter 6 excersise 4
#include <iostream>
#include <string>
using namespace std;
bool IsPalin(string word)
//returns true only if its stirng parameter is a palindrome.(any word spelled the same back & forwards)
{
    string reversed="";
    int length = word.length();
   // cout << "the length is : " << length << endl;
    for(int i=(length-1);i>=0;i--){
    reversed += word[i];//.substr(i,i);
    cout << reversed << " ";
    }
    cout << endl<< reversed << "  " << word << endl;
    if (word==reversed){
        return(true);
    }
    else{
        return(false);
    }
}
int main()
//calls function
{
    cout << "Is Bob a palindrom? " << endl;
    // IsPalin("BOB");
    if (IsPalin("BOB")==true){
        cout << "Yes \n";
    }
    else {
        cout << "no \n";
    }
    cout << "Is Theresa a palindrom? "<<endl;
    
    if (IsPalin("THERESA") = true){
        cout << "yes \n";
    }
    else {
        cout << "no\n";
    }
    return 0;
}