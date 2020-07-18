//chapter 8 example 1 works:)
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    //define two vectors: one for even and one for odd
    int NumOdd=0;
    int NumEven=0;
    vector<int> OddNumberArray(NumOdd);
     vector<int> EvenNumberArray(NumEven);
    //load array 25 random numbers if even - even array, if odd- odd array
    for(int i=1; i<=25; i++){
        int number = rand()%99;
        if (number%2==0){
            NumEven++;
            EvenNumberArray.push_back(number);
        }
        else{
            NumOdd++;
            OddNumberArray.push_back(number);
        }        
    }
    int size1 = EvenNumberArray.size();
    int size2 = OddNumberArray.size();
    cout << "Even: ";
    for(int j=0; j<size1; j++){
        cout <<EvenNumberArray[j] << " ";
    }
    cout << endl;
    cout << "Odd: ";
    for(int j=0; j<size2; j++){
        cout << OddNumberArray[j] << " ";
    }
    return(0);
}