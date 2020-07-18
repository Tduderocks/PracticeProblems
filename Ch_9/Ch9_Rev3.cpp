//chapter 9 review 3. average works, count works:) max and min good:) done:)
#include <iostream>
#include <istream>
#include <fstream>
#include<string>
#include <stdlib.h>
using namespace std;
int main()
{
    ifstream InFile("scores.dat",std::fstream::in);
    if(InFile.fail()){
        cout << "File could not be opened.";
        return(0);
    }
    else{
        int Num;
        int count=0;
        double Sum=0;
        double average;
        int NumVlaues;
        int maximum=0;
        int minimum=32767;//change to max integer number
        while(InFile>>Num) {
            //cout << ">" << Num << endl;
            Sum += Num;
            count ++;
            average = Sum/count; // works:)
            if(Num>maximum){
                maximum=Num;
            }
            if(Num<minimum){
                minimum=Num;
            }
            
        }
        cout << "sum: " << Sum << endl;
        cout << "Average: " << average << endl;
        cout << "Number of values: " << count << endl; //good
        cout << "Maximum: " << maximum << endl;
        cout << "Minimum: " << minimum << endl;
    return(0);
    }
}