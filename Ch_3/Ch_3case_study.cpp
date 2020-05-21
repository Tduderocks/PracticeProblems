/*Vote analysis program case study 3 page 3-17*/
#include <iostream>
using namespace std;
int main()
{
    cout << "-- Vote Analysis Progam -- " << endl;
    string Canidate1, Canidate2, Canidate3;
    cout << "Enter name of first canidate: ";
    cin >> Canidate1;
    cout << "Enter name of second canidate:  ";
    cin >> Canidate2;
    cout << "Enter name of third canidate: ";
    cin >> Canidate3; 

    long Votes1, Votes2, Votes3;
    cout<<"Enter votes for " << Canidate1 << ": ";
    cin>> Votes1;
    cout << "Enter votes for " << Canidate2 << ": ";
    cin >> Votes2;
    cout << "Enter votes for " << Canidate3 << ": ";
    cin>> Votes3; 
    cout << endl;

    long VotesTotal = Votes1 +Votes2 + Votes3;
    double Percent1 = 100* double(Votes1)/VotesTotal;
    double Percent2 = 100* double (Votes2)/VotesTotal;
    double Percent3 = 100* double(Votes3)/VotesTotal;
    
    const int ColWidth = 10; //Width of first columns in table
    const int ColWidth2 = 6; //Width of second two columns
    cout.setf(ios::fixed);
    cout.precision(2);

    //output column headings
    cout.setf(ios::left);
    cout.width(ColWidth); cout << "Candiate";
    cout.setf(ios::right);
    cout.width(ColWidth2); cout << "Votes";
    cout.width(ColWidth2); cout << "Pct" << endl;

    //output election results
    cout.setf(ios::left);
    cout.width(ColWidth); cout << Canidate1;
    cout.setf(ios::right);
    cout.width(ColWidth2); cout << Votes1;
    cout.width(ColWidth2); cout << Percent1 << endl;

    cout.setf(ios::left);
    cout.width(ColWidth); cout << Canidate2;
    cout.setf(ios::right);
    cout.width(ColWidth2); cout << Votes2;
    cout.width(ColWidth2); cout << Percent2 << endl;

    cout.setf(ios::left);
    cout.width(ColWidth); cout << Canidate3;
    cout.setf(ios::right);
    cout.width(ColWidth2); cout << Votes3;
    cout.width(ColWidth2); cout << Percent3 << endl;

    cout.width(ColWidth); cout << "Total" ;
    cout.width(ColWidth2); cout << VotesTotal << endl;
    if((Votes1==Votes2)||(Votes1==Votes3)||(Votes2==Votes3)){
        cout<<"It was a tie!" << endl;
    }
    if(Votes1>Votes2){ //How does this work for 3 canidates?
        cout << "Winner is: " << Canidate1 << endl;
    }
    if(Votes2>Votes1){
        cout << "Winner is: " << Canidate2 << endl;
    }
    if (Votes3>Votes1){
        cout << "Winner is: " << Canidate3 << endl;
    }
    return(0);
    

}

