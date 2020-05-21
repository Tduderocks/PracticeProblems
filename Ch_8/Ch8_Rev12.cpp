// chapter 8 review 12
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <chrono>
#include <conio.h>
using namespace std;
typedef vector<int> CountType;
void DisplayCounts(const CountType & Count, int NumberTrials)
/*Displays the constnest of Count[2] through Count[12] in two columns
  post: contennts of count displayed*/
  {
      cout << "Roll" << " " << "Percent" << endl;
      double percent;
      for(int i = 2; i < Count.size(); i++){
          percent = double(Count[i])/double(NumberTrials);
          cout << i<< "  "<< percent << endl;
      }
  }
void PerformTrials(CountType &Count, int NumTrials)
{
    for (int Trial=1; Trial<=NumTrials; Trial ++) {
        int Roll = (rand()%6+1) + (rand()%6+1);
        Count[Roll] ++;
    }
}
int main()
{
    const auto p1 = std::time(0);
    srand(p1);
    int NumberOfTrials;
    CountType Count(13,0); // Array 0 through 12 each initialized at 0
    cout << "Enter the number of trials to perform: ";
    cin >> NumberOfTrials;
    PerformTrials(Count, NumberOfTrials);
    DisplayCounts(Count, NumberOfTrials);
    return(0);

}