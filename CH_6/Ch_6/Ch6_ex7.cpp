//chapter 6 example 7. works but i i didnt do their while loop
#include <iostream>
#include <string>
#include "Utility.h"
#include <stdlib.h>
#include <chrono>
#include <conio.h>
using namespace std;
void ExtractFirstWord(string &Sentence, string &Word)
/*Removes the first wrod from sentence and returns it in word.
pre: words in sentence are seperated by blanks
post: first word of sentence returned with blanks before and after word disregarded.
sentence returned with first word and spaces before and after the word removed.
Sentene and word returned as empty strings if sentence contained no words.*/
{
    int length = Sentence.length();
    int end = Sentence.find(" ");
    //cout << end << endl;
    Word = Sentence.substr(0,end);
    if(end == -1)
    {
        Sentence="";
    }
    {
        Sentence = Sentence.substr(end+1,(length-1));

    }
    
    //return(Word);
}
int main()
//calls the function
{
    string S,W;
    cout << "Enter a phrase: ";
    getline(cin,S);
    while (S!=""){
     ExtractFirstWord(S,W);
     //cout << S << endl;
    cout << W << endl;
    }
    
    return(0);
}