//ch 6 ex 3. a works:) b works:) c ?
#include <iostream>
#include <string>
#include "Utility.h"
#include <stdlib.h>
#include <chrono>
#include <conio.h>
using namespace std;
string RanWord(int NumLetters)
//Returns a word formed of length NumLetters formed of random letters
 //pre: NumLetters>=1, randomize() has been called
//post: random word of length NumLetters returned
{
    string word="";
    for(int i=1;i<=NumLetters;i++){
    char letter = RandomInRange(65,90, false);
    word+=letter;
    }

    return(word);
}
int main()
//call ranword
{
    const auto p1 = std::time(0);
    srand(p1);
    for (int i=1; i<=5; i++){
    cout << RanWord(6) << endl;
    }
    return(0);
}