#include <iostream> // works:) 
#include <stdlib.h>
#include <chrono>
using namespace std;
int main()
{
    int tokens=100;
    char answer;// = 'y';
    cout << "You have " << tokens << " tokens. Pull? ";
    cin >> answer;
    cout << "You responded with: " << answer << endl;
    while (answer!='N')
    {        
        int spin1,spin2,spin3;
        spin1 = rand()%(3) + 1; 
        spin2 = rand ()%(3) + 1;
        spin3 = rand()%(3) + 1;
        const auto p1 = std::time(0);
        srand(p1);        
        tokens = tokens - 1;
        cout << "[ " << spin1  << "] [" << spin2 << "] [" << spin3 << "]" << endl;
                if((spin1==1) && (spin2==1) && (spin3 == 1)){
                tokens = tokens + 4;
                 }
                 else if ((spin1==2) && (spin2==2) && (spin3==2)){
                tokens = tokens +8;
                }
                else if ((spin1==3) && (spin2 ==3) && (spin3==3)){
                tokens = tokens + 12;
                }
        cout << "You have " << tokens << " tokens. Pull? ";
        cin >> answer;
    }
    cout << "Thanks for playing" << endl;

    return(0);
}