#include <iostream> // working :) part a & b working :)
using namespace std;
int main()
{
    char grade;
    double NumberOf1 = 0;
    double NumberOf2 = 0;
    double percent1,percent2;
    double total = 0;
            for(int i=1;grade!='Z';i++){
            cout << "Enter a grade  " ;
            cin >> grade;
            if((grade == 'A')||(grade =='B')||(grade =='C')||(grade =='D')){
                 NumberOf1=NumberOf1 +1;
            }
            else if((grade == 'E')||(grade =='F'))
            {
                NumberOf2=NumberOf2 +1;
            } 
            total = total + 1;
            }
    
    percent1 = ((NumberOf1/(total-1))*100.0);
    percent2 = ((NumberOf2/(total-1))*100.0);
    cout << NumberOf1 << " Students passed: " << percent1 << "%" << endl;
    cout << NumberOf2 << " Students failed: " << percent2 << "%" << endl;
    return(0);
}