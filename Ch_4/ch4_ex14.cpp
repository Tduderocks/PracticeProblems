#include <iostream> //works :)
using namespace std;
int main(){
    int boxes;
    cout << "How many boxes? ";
    cin >> boxes;
    for(int i=1;i<=boxes;i++){
        cout << "\tAmy's Garden Emporium "<<endl;
        cout << "\tSuntan, Iowa 12345 "<< endl;
        cout << "\tBox number " << i << " of " << boxes <<endl;
        cout << ""<< endl;
    }
    return (0);
}