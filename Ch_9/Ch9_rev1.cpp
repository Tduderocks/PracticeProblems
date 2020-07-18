//very cool! reads file. works yay:)
#include <iostream>
#include <istream>
#include <fstream>
#include<string>
#include <stdlib.h>
using namespace std;
int main()
{
    int CharacterCount=0;
    int lineCount=0;
    ifstream InFile("rev1.txt", std::fstream::in);
    if (InFile.fail()){
        cout << "File could not be opened";
        return(0);
    }
    else{
        string S;
        char C;
            while (getline(InFile, S))        //works
            {
            cout << " > " << S << endl;
            }
            cout << "Done " << endl;
            InFile.close();
            InFile.open("rev1.txt", std::fstream::in);

           while(InFile.get(C)){              //works 120 characters
            CharacterCount ++;
           }
            cout << "There are: " << CharacterCount << " characters."<<endl;
            InFile.close();
            InFile.open("rev1.txt", std::fstream::in);
            while (InFile.ignore(80,'\n')){             //works 3 lines
            lineCount ++;
            }
           cout << "There are: " << lineCount << " lines.";
           InFile.close();
    return(0);
    }
}