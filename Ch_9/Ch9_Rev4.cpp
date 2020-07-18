//chapter 9 review 4 works:)
#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
      ifstream InFile("rev4.txt", std::fstream::in);
    if (InFile.fail()){
        cout << "File could not be opened";
        return(0);
    }
    else{
        string S;
        //cout << "Hello";
        while (getline(InFile, S)){
           cout << " > " << S << ":";
           int sum=0;
           do{
               getline(InFile,S);
               int number = std::stoi(S);
               sum = sum + number;
           }while(S!="-1");
           sum = sum + 1;
           cout << sum << endl;
        }
    }
    return(0);
}