//chapter 10 ex 1 - works , done:)
#include <iostream>
#include <string>
#include <vector>
#include "Ch10Ex1SR.h"
using namespace std;

        int main()
        //call functions, do while
        {
            bool Quit = false;
            char Choice;
            vector< StudentClass> School;               //hold all info from class
            do{
                cout << "Press Add,Display,Quit, Search: ";
                Choice=getchar();
               // cout << endl;
                StudentClass Student;
                switch(Choice){
                    case 'A':
                    case 'a':Student.Read();
                             School.push_back(Student);
                            break;
                    case 'D':
                    case 'd': for (int i=0; i<School.size(); i++){
                                    School[i].Write();
                                }
                            break;
                    case 'q':
                    case 'Q': Quit = true; break;
                }
            }while(!Quit);
            return(0);
                }