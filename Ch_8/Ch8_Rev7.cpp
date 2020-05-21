//chapter 8 reveiw 7 & 8
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Add(vector<string> &Array, string &name){
    Array.push_back(name);
}

int Find(vector<string> &Array, string name){
    for (int i =0; i < Array.size(); i++){
        if (Array[i] == name){
            return i;
        }
    }
    return -1;
}
void Delete(vector<string> &Array, string &name)
{
    int spot = Find(Array,name);
    if(spot > -1){
        Array.erase(Array.begin()+spot);
    }

}

int main(){
    char answer;
    string name;
    cout << "Choose action Add = A Delete = D Find = F Quit = Q : ";
    cin >> answer;
    vector<string> names;
    while(answer!='Q'){
        cout << "enter a name: ";
        cin >> name;
        if (answer=='A'){            
            Add(names,name );
        }
        else if(answer =='D'){
            Delete(names, name);
        }
        else{
            Find(names, name);
        }
        for(int i = 0; i < names.size(); i++){
            cout << names[i] << endl;
        }
        cout << "Choose action (Add/Delete/Find/Quit) : ";
        cin >> answer;
    }
    return(0);
}