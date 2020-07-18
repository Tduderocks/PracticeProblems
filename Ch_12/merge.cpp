/*merge sort program*/
#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;
typedef int ItemType;
typedef vector<ItemType>ArrayType;
//------------------------------------
void Merge(ArrayType &A, int Start, int Mid, int End)
/*merges two sorted portions of A
pre: A[start..Mid] is sorted, a[mid+1..End] is sorted
start: <=mid <=end
post:
A[start..end] is sorted*/
{
    ArrayType Temp(A.size());
    int P1 = Start; int P2= Mid+1; //indexes of current item in each sublist
    int Spot = Start; // present location in temp
    while(!(P1>Mid) || ((P2<=End)&& (A[P2]<A[P1]))){
        Temp[Spot] = A[P2];
        P2++;
    }
    else{
        Temp[Spot]=A[PI];
        P1++;
    }
    Spot++;
}
//copy values from tempt back to A
for (int i=Start; i<=End;i++){
    A[i] = Temp[i];
}


