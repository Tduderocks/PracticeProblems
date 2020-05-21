//chapter 5 excersise 11
#include <iostream>
using namespace std;
int ReadInput(int &NumDays, int &StartDay)
/*asks for user input* works*/ 
{
    cout << "How many Days are in the month? ";
    cin >> NumDays;
    cout << "What day of the month is the first day? (1=Sun,2 =mon, 3=tues,4=wed,5=thrus,6=fri,7=sat";
    cin >> StartDay;
    return (NumDays);
}
int Display(int days, int start){
    // ReadInput(days,start);
    return(start);
}
void SpacesStarts(int space)
//Displays spaces
{
    const int length = 8;
    for(int i=1;i<=space;i++){
        cout.setf(ios::left);
        cout.width(length);
        cout << "*";
    }
}
void DisplayStars(int stars)
/*Displays the long rows. works well:)*/
{
    for(int i=1;i<=stars;i++){
    cout << "*";
    }
}
void RowWithNumbers(int start, int end)
//Displays the rows with numbers
{
    int x,y,z,h;
    // end = ReadInput(x,y);
    // start = Display(z,h);
    cout.setf(ios::left);
    
    for(int i=start; i<=end; i++){
            cout.setf(ios::left);
            cout.width(7);
            cout <<  "*" << i;
    }
    cout << "*";
}

void SpacedRowOfStarts(int numStars){
    for(int i = 0; i < numStars; i++){
        cout.setf(ios::left);
        cout.width(8);
        cout << "*";
    }
}
void Heading()
// Displays the heading works wel:)
{
   const int length = 8;
    cout.setf(ios::left);
    cout.width(length);
    cout << "  Sun";
    cout.setf(ios::left);
    cout.width(length);
    cout<< "  Mon";
    cout.setf(ios::left);
    cout.width(length);
    cout << "  Tue";
    cout.setf(ios::left);
    cout.width(length);
    cout << "  Wed";
    cout.setf(ios::left);
    cout.width(length);
    cout << "  Thu";
    cout.setf(ios::left);
    cout.width(length);
    cout <<"  Fri";
    cout.setf(ios::left);
    cout.width(length);
    cout << "  Sat" << endl;
}
int main()
// calls functions
{
    int NumDays,StartDay,start,end;
    ReadInput(NumDays,StartDay);
    Heading();
    start=1;
    end = 7;
    //Repeats for 5 rows good
    int numDaysInWeek = 7-StartDay;
    int i = 1;
    DisplayStars(56);
    cout<<endl;
    while(i<NumDays){        
        SpacedRowOfStarts(7-numDaysInWeek-1);
        RowWithNumbers(i, i+numDaysInWeek);
        for (int j=0;j<2;j++){
            cout << endl;
            SpacedRowOfStarts(8);            
        }
        i+=numDaysInWeek;
        cout << endl;
        DisplayStars(56);
        cout<<endl;
        if (NumDays-i>7){
            numDaysInWeek = 7;
        }
        else{
            numDaysInWeek = NumDays-7;
        }
    }
    // for(int i=1;i<=5;i++){
    //     DisplayStars(56);
    //     cout << endl;
    //     RowWithNumbers(start,end);
    //     cout << endl;
    //     SpacesStarts(8);
    //     cout << endl;
    //     SpacesStarts(8);
    //     cout << endl;
    //     start = start + end;
    //     end = end + 7;
    // }
    int num1 = addNum(3,4);
    int num2 = addNumber(5,6);
    int num3 = addNumber(num1,num2);
    return(0);
}

void anotherFunction(){
    int num4 = num1 + num2;
}

int addNumber(a,b){
    return a + b;
}