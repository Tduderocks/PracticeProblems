//chapter 9 review 11 works done:)
//this program combines file1rev11 and file2rev11 :)
#include <iostream>
#include <fstream>
#include<istream>
#include <string>
#include <stdlib.h>
using namespace std;
int main(){
    fstream MyFile("file1rev11.txt", ios::in | ios::out);
    fstream MyFile2("file2rev11.txt", ios::in | ios::out);
      if(MyFile.fail() || MyFile2.fail()) {
          cout << "File could not be opened";
          return(0);
      }
      else{
        string s;
        MyFile.seekp(0,ios::end);
        while(MyFile2>>s){
        MyFile << s << " ";
        }
    return(0);
}
}