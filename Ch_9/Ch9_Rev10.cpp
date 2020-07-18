//chapter 9 review 10 works:)
//This problem needs to open a file and change every letter in it using a code
#include <iostream>
#include <fstream>
#include<istream>
#include <string>
#include <stdlib.h>
using namespace std;
char CodeChar(const char Plain)
/*Encodes plain
  pre: plain is a letter, uppercase or lowercase
  post: coded version of plain returned*/
  {
      switch(Plain){
          case 'Z': return('A');
          case 'z': return('a');
          default: return(char(Plain +1));
      }
  }
  int main()
  //calls and tests codechar
  {
      fstream MyFile("rev10.txt", ios::in | ios::out);
      if(MyFile.fail()) {
          cout << "File could not be opened";
          return(0);
      }
      else{
          char c;
          while(MyFile >> c){// stores current charceter from MyFile in c             
            MyFile << CodeChar(c); // writes charcter back to file
        }
          MyFile.close();
      }
      return(0);
  }