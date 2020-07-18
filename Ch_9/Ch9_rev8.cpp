//chapter 9 review 8 doen''t work
#include <iostream>
#include <fstream>
#include<istream>
#include <string>
#include <stdlib.h>
using namespace std;
istream & getline (istream &InFile, int &N)
/*Assigns the nest value in InFile to N
  Post: value from Infile to N*/
  {
      InFile >> N;
      InFile.ignore(200,'\n');
      return(InFile);

  }
istream & getline (istream &InFile, char &T)
/* Assigns the next value in InFile to T
   post: value from infile stream assigned to T*/
   {
       InFile >> T;
       InFile.ignore(200,'\n');
       return(InFile);

   }
int main()
//call and test the functions
{
    int i=8;
    char l='t';
    ifstream InFile;
    InFile.getline("rev8.txt",i);
    InFile.getline("rev8.txt",l);
    return(0);
}