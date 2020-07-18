/*Chapter 9 example 2. Not done
objective: replace all occurrences of a word in a file with a new word*/
#include <iostream>
#include<fstream>
#include <string>
#include<conio.h>
using namespace std;
string CodeString(string KeyWord, string ReplacedWord)
/*Encodes keyword
    pre: keyword is a string
    post: coded version of keyword is returned*/
    {
        KeyWord.erase();
        KeyWord=ReplacedWord;
        return(KeyWord);
    }
int main(){
    string FileName;
    string KeyWord;
    string ReplacedWord;
    cout << "Enter the name of the file: ";
    getline(cin,FileName);
    cout << "Enter word to search for: ";
    cin >> KeyWord;
    cout << "Enter word to replace: ";
    cin >> ReplacedWord;
    fstream MyFile(FileName.c_str(),ios::in|ios::out);
    if(MyFile.fail()){
        cout << "Could not open the file\n";
        return(0);
    }
    else{
        string S;
        while(MyFile >> S){
            if(S==KeyWord){
            MyFile << CodeString(KeyWord,ReplacedWord);
            }
        }
        MyFile.close();
    }
}