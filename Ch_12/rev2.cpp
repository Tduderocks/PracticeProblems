/*Selection sort program*/
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <iostream>
using namespace std;
#include <chrono>
#include <conio.h>
using namespace std::chrono;
typedef vector<int> ArrayType;

  int FindLowest(const ArrayType &A, int Start, int End)
/*Returns the index of the lowet value in A[start]..A[end]
  post: index of lowest value in A[start]..A[end] returned*/
  {
      int LowSpotSoFar = 0;
      Start = 0;
      End = A.size();
      for(int i=Start; i<End; i++){
          if(A[i]<A[i+1]){
              LowSpotSoFar = i;
          }
      }
      return(LowSpotSoFar);
  }
  void AddToArray(ArrayType &A, const int NewItem)
  /*Increases size of A by 1 and adds newitem to A
  Post:size of A increased by 1, newitem last element in A*/
  {
      A.resize(A.size() +1);
      A[A.size()-1]= NewItem;
  }
  void RemoveFromArray(ArrayType &A, const int Index)
  /*removes element A[index] by sliding later elements back.
    assumes 0<= index <A.size() = 1*/
    {
        for (int i=Index; i<A.size()-1; i++)
        {
            A[i] = A[i+1];            
        }
        A.resize(A.size()-1);
    }
    void SelectionSort(ArrayType &A)
    /*sorts a from low to high
    post:elements of A in order from low to high */
    {
        for(int i =0; i<A.size(); i++){
            int LowSpot = FindLowest(A, i, A.size()-1);
            //swap lowest with next spot in array
            int T=A[LowSpot];
            A[LowSpot] = A[i];
            A[i] = T;
        }
    }
    void LoadRandomArray(ArrayType &A, int Size)
    /*fills array A with size random values in arnge 0.999*/
    {
        const auto p1 = std::time(0);
        srand(p1);
        const int MaxValue=999;
        A.resize(Size);
        for (int i=0; i<Size; i++)
        A[i] = rand()%(MaxValue+1);
    }
    void DisplayArray(const ArrayType &A)
    /*Displays the items of A, with field width of 5,10 per line*/
    {
        for (int i=0; i<A.size();i++){
            cout.width(5); cout<< A[i];
            if((i+1)%10 ==0)
            {
                cout <<endl;
            }
        }
    }
    void Sort(ArrayType &A)
    /*sorts array A from lowto high*/
    {
        SelectionSort(A);
    }
    int main()
    {
        ArrayType Sample;
        int SampleSize;
        cout <<"Enter the sample size: ";
        cin >> SampleSize;
        cout << "Loading array" << endl;
        LoadRandomArray(Sample, SampleSize);
        cout << "Inital Arrray" << endl;
        DisplayArray(Sample);
        // const auto start = std::time(0);
        // milliseconds start = duration_cast< milliseconds>(system_clock::now().time_since_epoch());
        unsigned __int64 start = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
        Sort(Sample);
        unsigned __int64 end = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
        // milliseconds end = duration_cast< milliseconds>(system_clock::now().time_since_epoch());
        // const auto end = std::time(0);
        cout << "Final array" << endl;
        DisplayArray(Sample);
        unsigned __int64 RangeTime = end - start;
        
        cout << "the range time is " << RangeTime << endl;
        return(0);
    }