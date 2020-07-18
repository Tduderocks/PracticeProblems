//chapter 8 review 20 // need to search works:) done:)
#include <iostream>
#include<string>
#include <vector>
#include <conio.h>
using namespace std;
struct StudentType{
    string last;
    string First;
    int classyear;
};
void GetStudentData(StudentType &Student)
/*Obtains values for all data members of student from user
  post: values entered for data members of student*/
  {
      cout << "Enter last name: ";
      cin >> Student.last;
      cout << "Enter first name: ";
      cin >> Student.First;
      cout << "Enter class: ";
      cin >> Student.classyear;
  }
  void DisplayStudentData(const StudentType &Student)
  /*Displays the data in Student, one element per line
    post: data in student displayed*/
    {
        cout << Student.First << " " << Student.last << " " << Student.classyear << endl;
    }
    struct SchoolType{
        SchoolType(); //constructor
        const int SizeChange; // amount to increase array by
        int NumStudents; //current number of students
        vector<StudentType>Students; //student recorss
    };
    SchoolType::SchoolType()
        :SizeChange(10), Students(10), NumStudents(0)
        /*Strat with space for 10 studnets, increase by SizeChange when needed*/
        {
        }
    void DisplaySchool(const SchoolType &School)
    /*Diplays a list of all students in school, one per line
      post: elements of school displayed*/
      {
          for (int i=0; i<School.NumStudents; i++)
          DisplayStudentData(School.Students[i]);
      }
      void AddStudent(SchoolType &School, const StudentType &NewStudent)
      /*Adds newstudent to school, increaseing size of school.studetn if needed
        post: newstudents added to school*/
        {
            if (School.NumStudents==School.Students.size())
                School.Students.resize(School.NumStudents+School.SizeChange);
            School.Students[School.NumStudents]=NewStudent;
            School.NumStudents ++;
        }
        void SearchFor(SchoolType school)
        //search for studnent
        {
            string Lastname,FirstName;
            cout << "Enter last name: ";
            cin >> Lastname;
            cout << "Enter first name: ";
            cin >> FirstName;
            for (int i = 0; i < school.NumStudents; i ++){
                StudentType student = school.Students[i];
                if((Lastname==student.last) && (FirstName==student.First)){
                    DisplayStudentData(student);
                    return;
                }
            }
            cout << FirstName << " " <<Lastname << "not found";
        }
        int main()
        //call functions, do while
        {
            StudentType Student;
            SchoolType School;
            bool Quit = false;
            char Choice;
            do{
                cout << "Press Add,Display,Quit, Search: ";
                Choice=getchar();
               // cout << endl;
                switch(Choice){
                    case 'A':
                    case 'a':GetStudentData(Student);
                            AddStudent(School,Student);
                            break;
                    case 'D':
                    case 'd': DisplaySchool(School);
                            break;
                    case 'S':
                    case 's': SearchFor(School);
                    case 'q':
                    case 'Q': Quit = true; break;
                }
            }while(!Quit);
            return(0);
                }
