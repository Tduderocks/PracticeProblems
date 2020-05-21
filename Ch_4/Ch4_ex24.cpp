#include <iostream> //pattern works :)
using namespace std;
int main()
{
    double start = 0.5;
    double valueOf;
    cout << "provide the 2 value between 2 and 4 ";
    cin >> valueOf;
    for(int i =1;i<=50;i++){
        start = valueOf*start*(1-start);
        cout << start << endl;
    }
    return (0);
}