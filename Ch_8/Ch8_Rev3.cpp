//Chapter 8 Review 3 worksh :) done
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    const int NumItems = 3;
    const int NumVotes = 5;
    vector<string> NameArray(NumItems);
    vector<long> VoteArray(NumVotes);
    int Index;
    for(Index = 0; Index < NumItems; Index ++){
        cout << "Enter a name: ";
        cin >> NameArray[Index];
        cout << "Enter the number of Votes: ";
        cin >> VoteArray[Index];
    }
    cout << "Results: " << endl;
    const int width = 10;
    for (Index = 0; Index <NumItems; Index ++){
        cout.setf(ios::left);
        cout.width(width);
        cout << NameArray[Index];
        cout.width(width);
        cout << VoteArray[Index] << endl;
    }
    return(0);
}
