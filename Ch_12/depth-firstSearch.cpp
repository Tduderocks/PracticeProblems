//needs matrix
/*depth-first search progarm for finding coloineis*/
#include <fstream>
#include <iostream>
#include <matrix.h>
#include<string.h>
using namespace std;
class SlideClass{
    public:
    SlideClass();
    void LoadSlide(const String & FileName);
    void DisplaySlide() const;
    void DisplayColonies();
    private:
    matrix<char>S;
    int CollectCells(int Row, int Col);
    const char Colony, NonColony;
};
//--------------------
SlideClass::SlideClass():
    Colony('*'), NonColony('-')
    {
    }
//---------------------
int SlideClass::CollectCells(int Row, int Col)
/*post: all conlony cells adjoining and inclduing cell (row,col) have
been cahgned to nonColony, and count of these cells is retruned.*/
{
    if ((Row<0) || (Row>=S.numrows()) || (Col<0) || (Col>=S.numcols()) || (S[Row][Col]!=Colony))
    return 0;
    else{
        S[Row][Col]=NonColony;
        return (1+ CollectCells(Row+1, Col)+CollectCells(Row-1, Col) + CollectCells(Row, Col+1)+CollectCells(Row, Col-1));
    }
}
//---------------------------
void SlideClass::DisplayColonies()
/*Post: Displays a list of the colonies on the slide S, giving
coordinates of a point ine each colony and its size*/
{
    //make a copy since CollecCells destroys matrix
    matrix<char> Temp = S;
    for (int Row=0; Row <S.numrows(); Row++)
    {
        for (int Col=0; Col<S.numcols(); Col++){
            int Count = CollectCells(Row,Col);
            cout << "Colony at (" << Row<< "," << Col << ")with size" << Count << endl;
        }
    }
    S = Templ; //restore matrix
}
