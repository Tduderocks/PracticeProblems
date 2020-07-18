//chapter 8 example 2 works, but faster way? // make array
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //initialize vector
    //array of size10 init at 0, set array of i to array of i +1
    int x=0,y=0,z=0,a=0,b=0,c=0, d=0, e=0, f=0, g=0;
    vector<int>firstArray(x);
    vector<int>SecondArray(y);
    vector<int>ThirdArray(z);
    vector<int>fourthArray(a);
    vector<int>fifthArray(b);
    vector<int>sixthArray(c);
    vector<int>seventhArray(d);
    vector<int>eithArray(e);
    vector<int>ninthArray(f);
    vector<int>tenthArray(g);
    
    //create random numbers and store them in vecotor array
    for (int i=0; i<=500; i++){
        int number = rand()%9;
        if (number==0){
            firstArray.push_back(i);
            x++;
        }
        else if(number==1){
            SecondArray.push_back(i);
            y++;
        }
        else if(number==2){
            ThirdArray.push_back(i);
            z++;
        }
        else if(number==3){
            fourthArray.push_back(i);
        }
        else if(number==4){
            fifthArray.push_back(i);
        }
        else if(number==5){
            sixthArray.push_back(i);
        }
        else if(number==6){
            seventhArray.push_back(i);
        }
        else if(number==7){
            eithArray.push_back(i);
        }
        else if(number==8){
            ninthArray.push_back(i);
        }
        else{
            tenthArray.push_back(i);
        }
    }
    //display heading
    cout << "Number";
    const int width=15;
    cout.width(width);
    cout << "Occuracnes";
    cout << endl;
    // display occuraces
        cout << "0";
        cout.width(width);
        cout <<firstArray.size();
        cout << endl;
        cout << "1";
        cout.width(width);
        cout << SecondArray.size() << endl;
        cout << "2";
        cout.width(width);
        cout << ThirdArray.size() << endl;
    return(0);
}