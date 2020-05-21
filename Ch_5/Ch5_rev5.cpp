//chapter 5 Review 5 works:) if that's all they wanted
#include <iostream>
using namespace std;
void GiveHint(int Secret, int Guess)
//Gives Hints
{
    if(Guess==Secret){
        cout << "You've got it! \n";
    }
    else if(Guess > Secret){
        cout << "Too high! Try again! \n";
    }
    else if(Guess < Secret){
        cout << "Too low! Try again! \n";
    }
}
int main(){
    GiveHint(4,5);
    GiveHint(4,4);
    GiveHint(5,4);
    return(0);
}