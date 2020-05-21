#include <iostream> // works :) 
using namespace std;
int main()
{
    int Kubak, Kelly;
    cout.precision(2);
    double totalKelly = 0;
    double totalKubak = 0;
    int wardsKelly = 0;
    int wardsKubak = 0;
    for(int i=1;i<=6;i++){
        cout << "Ward "<<i <<endl;
        cout << "\t Enter Kubak: " ;
        cin >> Kubak;
        cout << "\t Enter Kelly: ";
        cin >> Kelly;
         if(Kubak>Kelly){
            wardsKubak++;// = wardsKubak+1;
        }
        else if (Kelly>Kubak){
            wardsKelly++;// = wardsKelly+1;
        }
        totalKelly = totalKelly + Kelly;
        totalKubak = totalKubak + Kubak;

    }
    double totalvotes = totalKelly+totalKubak;

    const int ColWidth = 12;
    cout.setf(ios::fixed);
    //first column
    cout.setf(ios::left);
    cout.width(ColWidth);
    cout << "Name ";
    cout << "Votes ";
    cout << "Percent ";
    cout << "Ward won "<<endl;

    //second column
    cout.setf(ios::left);
    cout << "Kubak" ;
    cout.setf(ios::right);
    cout.width(ColWidth);
    cout << totalKubak;
    cout.width(ColWidth);
    cout << (totalKubak/totalvotes)*100;
    cout.width(ColWidth);
    cout << wardsKubak << endl;

    //thrid column
    cout.setf(ios::left);
    cout << "Kelly ";
    cout.setf(ios::right);
    cout.width(ColWidth);
    cout << totalKelly;
    cout.width(ColWidth);
    cout << (totalKelly/totalvotes)*100;
    cout.width(ColWidth);
    cout << wardsKelly << endl;
    return(0);
}