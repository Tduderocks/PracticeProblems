#include <iostream> // :)works a and b
using namespace std;
int main()
{
    int integer;
    int answer=1;
    cout << "Enter an integer: " ;
    cin >> integer;
    while(integer < 0){
        cout << integer << "! is undefined.\n";
        cout << "Enter an integer: ";
        cin >> integer;
    }
    for(int i=integer;i>=1;i--)
    {
        answer=answer*i;
}

    cout << integer << "! = " << answer;
    return(0);
}