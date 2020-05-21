// ch 5 example works:)
#include<iostream>
using namespace std;
int main()
{
    int Model;
    do{
        cout << "Enter your model number (0 for done): \n";
        cin >> Model;
    if(Model==119 || Model ==179 || (Model >= 189 && Model <= 195) || Model == 221 || Model == 780){
         cout << "Your car is defective, please have it fixed \n";
     }
    else if(Model !=0){
        cout << "Your car is OK \n";
    }
    }while (Model!=0);
    if (Model == 0){
        cout <<"Program complete" << endl;
    }
    
}