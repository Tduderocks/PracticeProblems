//Chapter 4 ex 18 a,b, and c work :)
#include <iostream>
using namespace std;
int main()
{
    double grade;
    double sum = 0.00;
    double average = 0.00;
    int setinal = -1;
    for(int i=1;grade!=-1;i++){
            if (grade<0 ||grade>100){
            }
        cout << "Enter a grade: (-1 to stop) ";
        cin >> grade;
        if (grade>=0 && grade<=100){
            double total = total +1;
            sum = sum + grade;
            cout.setf(ios::fixed);
            average = (sum/total);
        }
        else if((grade<0)||(grade>100)){
            cout << grade << " is not an acceptable grade " << endl;
        }
        }
        cout << "The total is " << sum << endl;
        cout << "The average is " << average;
    return (0);
}