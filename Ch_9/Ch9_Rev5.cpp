//chapter 8 review 5 works done:)
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
//displays the number of characters without counting end line.
{
    int count =0;
    ifstream InFile("rev5.txt", std::fstream :: in);
    if(InFile.fail()){
        cout << "File could not be open";
        return(0);
    }
    else{
        char Character;
        while (InFile.get(Character))
        if (Character =='\n')
        {
            cout << "end-of-line" << endl;
        }
        else{
        cout << ">" << Character << endl;
        count ++;
        }
        cout << "Done" << endl;
        cout << "There are: " << count << " characters.";
    return(0);
    }
}