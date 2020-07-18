//chapter 9 review 6 origional worksnn
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
void DisplayStats(ifstream &InFile)
/*Displays the number of characters and lines in InFile.
  End-of-line characters are not counted as characters.
  pre: InFile open
  post : file statistics displayed*/
  {
      string S;
      long TotalChars=0;
      long TotalLines = 0;
      while(getline(InFile,S)){
          TotalChars+= S.length();
          TotalLines++;
      }
      cout << "Total Charactrers: " << TotalChars << endl;
      cout << "Total lines: " << TotalLines << endl;
  }
  int main()
  {
      ifstream InFile;
      string FileName;
      while (true){
          cout << "Enter name of file (Enter to quit)";
          getline(cin,FileName);
          if (FileName.length()==0)
              break;
          InFile.open(FileName.c_str(),std::fstream::in);
          if (InFile.fail())
          cout << "File cannont be opened" << endl;
          else {
              DisplayStats(InFile);
              InFile.close();
          }
      }
      return(0);
  }