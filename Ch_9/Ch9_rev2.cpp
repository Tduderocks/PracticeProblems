//chapter 9 review 2 . works:)
#include <iostream>
#include <istream>
#include <fstream>
#include<string>
#include <stdlib.h>
using namespace std;
int main()
{
    ifstream InFile("rev1.txt", std::fstream::in);
    if (InFile.fail()){
        cout << "File could not be opened";
        return(0);
    }
    else{
        string S;
        //char str[400];
        int count =0;
        while (InFile >> S){
            int pos = S.find("you");
            cout << " > " << S << " " << pos << endl;
            if(pos ==0){
                count ++;
            }
        }
            
        //istream &get(char*n);
        cout<< "\"you\" occurs " << count << " times";

    }
    return(0);
}