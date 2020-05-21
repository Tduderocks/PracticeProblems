#include <iostream> //good works:)
using namespace std;
int main()
{
    int Number;
    for(int i=1;i<=200;i++){
        Number=i;
            for(int j = 0; j<100;j++){
                if(Number%2==0){
                Number=Number/2;
                }
                else if(Number%2!=0){
                Number=(3*Number)+1;
                }
                 cout << Number ;
                 cout << "," ;
            }
            cout<< "" << endl << endl<< endl;
    }
    return 0;
}