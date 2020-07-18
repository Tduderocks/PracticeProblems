//chapter 8 example 4 How can I break these up into functions?  and histogram. faster way to count elements.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int mode=0;
    //get data works:)
    int numberOfElements=0;
    vector<int>Analyze(numberOfElements);
    vector<int>CountingMode(50,0); // optional argument to initialize
    int i;
    while(i!=0){
        cout << "Enter a number, 0 when finished ";
        cin >> i;
        Analyze.push_back(i);
        numberOfElements++;
        CountingMode[i] ++;
    }
    //display vector works:)
    for(int j=0; j<numberOfElements;j++){
        cout << Analyze[j] << ", ";
    }
    cout << endl;
    //size works :)
    int size=(Analyze.size()) - 1;
    cout << "the size is: " << size;
    cout << endl;
    //get average works:)
    double average;
    int sum=0;
    int maximum=0;
    int minimum=55;
    for (int j=0; j<=(size-1); j++){
        sum +=Analyze[j];
        cout << "the numbers being added are: " << Analyze[j];
        cout << endl;
        if(Analyze[j]>maximum){
            maximum=Analyze[j];
        }
        if(Analyze[j]<minimum){
            minimum=Analyze[j];
        }
        
    }
    average = sum/size;
    cout << "the average is: " << average << endl;;
    //maximum number works:)
    cout << "The maximum number is: " << maximum << endl;
    //range works:)
    int range = maximum - minimum;
    cout << "The range is: " << range << endl;
    //mode works:)
    int MaxCount = -1;
    for (int j=0; j<CountingMode.size(); j++){
        if (CountingMode[j] > MaxCount){
            MaxCount = CountingMode[j];
            mode = j;
        }
    }
    cout << "The mode is: " << mode << endl;
    //histogram
    cout << "Histrogram: " << endl;
    int l;
    int countHistogram1 =0;
    if(CountingMode[l]<6 && CountingMode[l]>0){
        countHistogram1 ++;
    }
    cout << "1-5:" << countHistogram1;
    //cout << "6-10 :" << 
    //cout << "11-15:" <<
return(0);
}
