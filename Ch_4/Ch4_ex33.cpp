#include <iostream> //it works :)
#include <stdlib.h>
#include <chrono>
using namespace std;
int main()
{
    char Answer;
    int ComputerWins = 0;
    int UserWins = 0;
    int Draws = 0;
    while (Answer!='N'){
    int CardNumber;
    cout << "How many cards do you want? ";
    cin >> CardNumber;
    int UserCard1 = rand()%10 +1;
    int UserCard2 = rand()%10 +1;
    int UserCard3 = rand()%10 +1;
    int ComputerCard1 = rand()%10 +1;
    int ComputerCard2 = rand()%10 +1;
    int ComputerCard3 = rand()%10 +1;
    const auto p1 = std::time(0);
        srand(p1);
        if(CardNumber == 1 && UserCard1!=0){
            cout << "You: " << UserCard1 << endl;
            UserCard2 =0;
            UserCard3 =0;
        }
        else if(CardNumber == 2){
            cout << "You : " << UserCard1 << "  " << UserCard2 << endl;;
            UserCard3 =0;
        }
        else if (CardNumber ==3){
            cout << "You: " << UserCard1 << "  " << UserCard2 << "  " << UserCard3 << endl;
        }
        cout << "Computer: " << ComputerCard1 << " " << ComputerCard2 << "  " << ComputerCard3 << endl;
            int ComputerTotal = ComputerCard1 + ComputerCard2 + ComputerCard3;
            int UserTotal = UserCard1 + UserCard2 + UserCard3;
            if(((UserTotal > ComputerTotal) && (UserTotal < 22)) || ((UserTotal < 22) && (ComputerTotal > 22))){
                cout << "I have " << ComputerTotal << " and you have " << UserTotal << " so you win" << endl;
                UserWins = UserWins +1;
            }
            else if (UserTotal == ComputerTotal){
                cout << "I have " << ComputerTotal << " and you have " << UserTotal << " so we draw" << endl;
                Draws = Draws +1;
            }
            else if(((UserTotal < ComputerTotal) && (ComputerTotal < 22)) || ((UserTotal > 22) && (ComputerTotal < 22))){
                cout << "I have " << ComputerTotal << " and you have " << UserTotal << " so I win" << endl;
                ComputerWins = ComputerWins +1;
            }

            cout << "Would you like to play again (Y/N) ?";
            cin >> Answer; 
        }
        cout << "Computer Wins = " << ComputerWins << endl;
        cout << "User Wins = " << UserWins << endl;
        cout << "Draws = " << Draws << endl;
    return(0);
}