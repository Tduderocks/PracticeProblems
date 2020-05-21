#include<iostream> //works:)
using namespace std;

int main()
{
    int Integer1,Integer2;
    cout << "Enter an integer: ";
    cin >> Integer1;
    cout<< "Enter an integer: ";
    cin >> Integer2;
    int GCD,bigger,smaller,number;
    cout << GCD << endl;
    if (Integer1>=Integer2){
            bigger = Integer1;
            smaller = Integer2;
            cout << Integer1 << " is bigger";
        }
        else
        {
            bigger = Integer2;
            smaller = Integer1;
            cout << Integer2 << " is bigger";
        }
    for(int number=smaller; number>=1 ;number--){
        cout << smaller << "%"<<number << endl;
        cout << bigger << "%"<<number << endl;
        if (smaller%number==0 && bigger%number==0){

            GCD = number;
            break;            
            }
    }
    cout << " The GCD is: " << GCD << endl;
    return(0);
}