//merge sort program
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <chrono>
#include <conio.h>
using namespace std;
typedef int ItemType;
typedef vector <ItemType>ArrayType;
//--------------------------------------
void Merge(ArrayType &A, int Start, int Mid, int End)
/*Merges two sorted portions of A
  pre: A[start.mid] is sorted, A[mid+1..End] is sorted
  start <=Mid<=End
  postL=: A[start..end]is sorted*/
  {
      ArrayType Temp(A.size());
      int P1 = Start; int P2 = Mid+1; //indexes of current item in each sublist
      int Spot = Start; //present location in Temp
      while(!(P1>Mid && P2>End)){
          if((P1>Mid)||((P2<=End)&&(A[P2]<A[P1]))){
              Temp[Spot] = A[P2];
              P2++;
          }
          else {
              Temp[Spot] = A[P1];
              P1++;
          }
          Spot++;
      }
      //Copy values from Temp back to A
      for (int i = Start; i<=End; i++){
          A[i] = Temp[i];
      }   
  }
  //-------------------------------------
  void MergeSort (ArrayType &A, int Start, int End)
  /*Sorts A[Start..End] elements from low to high
  Pre: Start, End >= 0
  Post: Elements A[Start.End] are sorted from low to high*/
  {
      if (Start <End){
          int Mid = (Start+End)/2;
          MergeSort(A, Start, Mid);
          MergeSort(A, Mid+1, End);
          Merge(A, Start, Mid, End);
      }
  }
  //--------------------------------------------
  void LoadRandomArray(ArrayType &A, int Size)
  /*fills array A with size random values in the range 0..99*/
  {
      const int MaxValue = 999;
      A.resize(Size);
      for (int i = 0 ; i<Size; i++){
          A[i] = rand()%(MaxValue+1);
      }
  }
  //-----------------------------------------------
  void DisplayArray(const ArrayType &A)
  /*Displays the items of A, with field width of 5,10 per line*/
  {
      for (int i=0; i<A.size(); i++){
          cout.width(5);cout <<A[i];
          if((i+1)%10 ==0){
            cout <<endl;
          }
      }
      cout << endl;
  }
  //-------------------------------------------------
  void Sort(ArrayType &A)
  /*Sorts array A from low to high*/
  {
      MergeSort(A, 0, A.size()-1);
  }
  //----------------------------------------------------
  int main()
  {
    const auto p1 = std::time(0);
    srand(p1);
    ArrayType Sample;
    int SampleSize;
    cout << "Enter the sample size: ";
    cin >> SampleSize;
    LoadRandomArray(Sample, SampleSize);
    DisplayArray(Sample);
    unsigned __int64 start = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    Sort(Sample);
    unsigned __int64 end = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    DisplayArray(Sample);
    unsigned __int64 RangeTime = end - start;
    cout << "the range time is " << RangeTime << endl;
    return 0;
  }