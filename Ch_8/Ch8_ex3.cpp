//chapter 8 example 3 works woot! done:)
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    //get data
    int coutSize=15;
    vector<int>Integers(15);
    for(int i=1;i<=15;i++){
        cout << "enter an interger: ";
        cin >> Integers[i];
    }
    //display data
    for (int j=15; j>0; j--){
        cout << Integers[j] << " , ";
    }
}
