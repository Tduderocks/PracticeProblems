//chapter5 ex 19 works
#include <iostream>
using namespace std;
void Introduction(int &choice)
//Student chooses what to work on
{
    cout << "Enter the number for the problem type desired. \n";
    cout << "\t 1. Addition\n";
    cout << "\t 2. Subtraction\n";
    cout << "\t 3. Multiplication\n";
    cout << endl << "Enter Choice ";
    cin >> choice;
}
void Multiplication()
//multiplication problems
{
    int x,y,z, answer;
    int score = 0;
    for(int i=1;i<=10;i++){
        x = rand()%100+1;
        y = rand()%100+1;
        cout << x <<"*" <<y << "=";
        cin >> answer;
        z = (x*y);
        if (answer ==z){
            cout << "Nice! That's correct." << endl;
            score = score +10;
        }
        else if (z!=answer){
            cout << "Wrong Try again " << x << "*" << y << " = ";
            cin >> answer;
            if (z==answer){
                cout << "Correct on the second try";
                score = score +5;
            }
            else if(z!=answer){
                cout << "wrong try again "<< x << "*" << y << " = ";
                cin >> answer;
                if ((z)==answer){
                    cout << "Correct on the thrid try ";
                    score = score +2;
                }
                    else if (z!=answer){
                        cout << "You missed 3 times. The answer is: " << z << endl;
                    }
                }
            }
        }
        cout << "Your socre is " << score << endl;
}
void Subtraction()
//subtraction problems
{
int x,y,z, answer;
    int score = 0;
    for(int i=1;i<=10;i++){
        x = rand()%100+1;
        y = rand()%100+1;
        cout << x <<"-" <<y << "=";
        cin >> answer;
        z = (x-y);
        if (answer ==z){
            cout << "Nice! That's correct." << endl;
            score = score +10;
        }
        else if (z!=answer){
            cout << "Wrong Try again " << x << "-" << y << " = ";
            cin >> answer;
            if (z==answer){
                cout << "Correct on the second try";
                score = score +5;
            }
            else if(z!=answer){
                cout << "wrong try again "<< x << "-" << y << " = ";
                cin >> answer;
                if ((z)==answer){
                    cout << "Correct on the thrid try ";
                    score = score +2;
                }
                    else if (z!=answer){
                        cout << "You missed 3 times. The answer is: " << z << endl;
                    }
                }
            }
        }
        cout << "Your socre is " << score << endl;
}
void Addition()
//addition problems
{   int x,y,z, answer;
    int score = 0;
    for(int i=1;i<=10;i++){
        x = rand()%100+1;
        y = rand()%100+1;
        cout << x <<"+" <<y << "=";
        cin >> answer;
        z = (x+y);
        if (answer ==(x+y)){
            cout << "Nice! That's correct." << endl;
            score = score +10;
        }
        else if ((x+y)!=answer){
            cout << "Wrong Try again " << x << "+" << y << "= ";
            cin >> answer;
            if ((x+y)==answer){
                cout << "Correct on the second try";
                score = score +5;
            }
            else if((x+y)!=answer){
                cout << "wrong try again "<< x << "+" << y << "= ";
                cin >> answer;
                if ((x+y)==answer){
                    cout << "Correct on the thrid try";
                    score = score +2;
                }
                    else if ((x+y)!=answer){
                        cout << "You missed 3 times. The answer is: " << (x+y) << endl;
                    }
                }
            }
        }
        cout << "Your socre is " << score << endl;
}
int main()
//calls functions
{
int choice;
Introduction(choice);
if (choice==1){
    Addition();
}
else if (choice==2){
    Subtraction();
}
else{
    Multiplication();
}
return(0);
}