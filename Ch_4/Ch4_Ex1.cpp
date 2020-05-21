//works :)
#include <iostream>
using namespace std;
int main()
{
    char Answer1,Answer2;
    cout << "Does the computer beep on startup? (Type Y for yes and N for no)?";
    cin >> Answer1;
    cout << "Does the hard drive spin? ";
    cin >> Answer2;
    if (Answer1 =='Y' && Answer2 =='Y')
        cout << "Contact tech support\n";
        else if(Answer1 =='Y' && Answer2 =='N')
        cout<< "Check drive contact\n";
        else if(Answer1 =='N' && Answer2 =='N')
        cout <<"Bring computer to repair center\n";
        else if(Answer1 == 'N' && Answer2 == 'Y')
        cout << "Check the speaker contacts\n";

        return(0);
    
}