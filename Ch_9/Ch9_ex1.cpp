//chapter 9 example 1. works:) done
//should display the number of words and average lenth of soure.txt
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ifstream InFile("ex1source.txt", std::fstream::in);
    if (InFile.fail()){
        cout << "File could not be opened";
        return(0);
    }
    else{
        string S;
        char c;
        int WordCount=0;
        double AverageLength=0;
        int characterNumber=0;
        while(InFile >> S){
            WordCount ++;  
        }
        InFile.close();
        InFile.open("ex1source.txt", std::fstream::in);
        while(InFile.get(c)){
        characterNumber ++;
            if(c=='-'){
                WordCount ++;
            }
        }
        AverageLength = characterNumber/WordCount;
        cout <<"The word count of the file is: " << WordCount << endl;
        cout << "There are " << characterNumber << " characters\n";
        cout << "The average word length is: " << AverageLength << endl;
        return(0);
    }

}
