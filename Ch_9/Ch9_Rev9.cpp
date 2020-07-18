//chapter 9 review 9
#include <iostream>
#include <fstream>
#include<istream>
#include <string>
#include <stdlib.h>
using namespace std;
istream & getline (istream &InFile, bool &N)
/*Assigns the nest value in InFile to N
  Post: value from Infile to N*/
  {
      InFile >> N;
      InFile.ignore(200,'\n');
      return(InFile);

  }