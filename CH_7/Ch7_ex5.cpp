//chater 7 ex 5 works yay:)
#include <iostream>
#include <math.h>
using namespace std;
void QuadraticEqu()
{
    double a,b,c;
    cout << "Enter a ";
    cin >> a;
    cout << " Enter b ";
    cin >> b;
    cout << " Enter c ";
    cin >> c;
    double root1,root2;
    root1 = ((-1*b) + (sqrt((b*b)-4*a*c)))/(2*a);
    root2= ((-1*b) - (sqrt((b*b)-4*a*c)))/(2*a);
    cout << "The first root = ";
    cout << root1;
    cout << " The second root = ";
    cout << root2;
}
int main()
//calls function
{
    QuadraticEqu();
    return(0);
}