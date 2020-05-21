#include <iostream> // works :)
using namespace std;
int main()
{
    int initial;
    cout<<"Enter initial investment ";
    cin >> initial;
    double rate;
    double Interest = 0;
    double total = 0;
    for(int i=1;i <=5;i++){
        cout <<"Enter interest rate for year " << i << " (decimal): " ;
        cin >> rate;
        Interest = initial * rate;
        initial = initial + Interest;
        cout << "Your earned $ " << Interest << "interest. \n";
        total = (total + Interest) + initial;
    }
    cout << "Your CD is worth "<< total;
    return(0);
}