#include <iostream> // got it to work:)
using namespace std;
int main()
{
    int whatever;
    char c;
    int guess = 50;
    int HighestPossible = 100;
    int LowestPossible = 1;
    int NumberOfGuesses = 0;
    cout << "Think of a number between 1 and 100 and then press any key";
    cin >> whatever;
        while(c!='c'){
            cout << "Is the number" << guess << "(Correct c, Low l, high h) ?";
            cin >> c;
        if(c=='h')
        {
            HighestPossible = guess-1;
            guess -= ((HighestPossible-LowestPossible)/2);
        }
        else if(c=='l')
        {
            LowestPossible = guess +1;
            guess += (HighestPossible-LowestPossible)/2;
        }
         NumberOfGuesses=NumberOfGuesses + 1;
        }
    cout << "Number of Gueses " << NumberOfGuesses;
    return(0);
}