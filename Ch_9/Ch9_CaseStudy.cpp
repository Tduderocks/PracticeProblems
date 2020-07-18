/*Chapter 9 Case Study works:) Review 12: ListBooks() works:) Review 13: need to do
Review 14: add publisher & pub year workds done:)
Review 15: display titles that contain a certain word. need to finish
Reivew 16: command that removes all records with 0 in stock. need to do
Bookstore inventory problem */
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <stdlib.h>
using namespace std;
const long MaxRecSize =150; //global constant
struct BookType {
    long CopiesInStock;
    string Title;
    string Author;
    string Publisher;
    long PubYear;
};
istream & getline (istream &InFile, long &N)
/*Assigns the next value in InFile to N
  post: value from Infile stream assigned to N */
  {
      InFile >> N;
      InFile.ignore(100,'\n');
      return(InFile);
      }
long NumRecords(fstream &F)
/*Determines number of records in F based on record size of maxRecSize
  pre: f is open
  post : number of records in F returned*/
  {
      F.seekp(0,ios::end);
      if(F.tellp()==0)
      return(0);
      else {
          return(1+F.tellp()/MaxRecSize);
      }
  }
  bool ReadBook(fstream &F, const long RecNum, BookType &Book)
  /*Reads record RecNum into book
    pre: F is open fro reading 
    post: book contains recored recnum
    false returned if the read fails, otherwise true returned*/
    {
        if ((RecNum<NumRecords(F))&& (F.seekg(RecNum*MaxRecSize))){
            getline(F,Book.CopiesInStock);
            getline(F, Book.Title);
            getline(F,Book.Author);
            getline(F,Book.Publisher);
            getline(F,Book.PubYear);
            return(true);
        }
        else{
            return(false);
        }
    }
    bool WriteBook(fstream &F, const long RecNum, const BookType & Book)
    /*Writes book to F at position RecNum
      Pre: F is open for reading
      post: book written to F at RecNum record.
      false return if read fails, true return otherwise.*/
      {
          if((RecNum<= NumRecords(F)) && (F.seekp(RecNum*MaxRecSize))){
              F.seekp(RecNum*MaxRecSize);
              F << Book.CopiesInStock << endl << Book.Title << endl << Book.Author << endl << Book.Publisher << endl << Book.PubYear << endl;
              return(true);
          }
          else{
              return(false);
          }
      }
      void ShowBook(const long N, const BookType &Book){
      /*Diplays a books's data in a formatted line
        post: N, Book displayed on a formatted line*/
        cout.width(2); cout << N << ".";
        cout.setf(ios::left);
        cout.width(20); cout << Book.Title << " ";
        cout.width(20); cout << Book.Author << " ";
        cout.width(20); cout << Book.Publisher << " ";
        cout.setf(ios::right);
        cout.width(6); cout << Book.PubYear << " ";
        cout.width(6); cout << Book.CopiesInStock << endl;
      }
      void ChangeBook(fstream &BookFile)
      /*Displays a book and allows user to change its stock.
        pre: bookfile is open for read/write
        post: book selected by user has been displayed and stock may have changed*/
        {
            long BookNum;
            BookType Book;
            while(true){
                cout << "Enter number of book to change: ";
                getline(cin, BookNum);
                if(ReadBook(BookFile,BookNum,Book)){
                    break;
                }
                    cout << "Bad book number" << endl;
                }
                ShowBook(BookNum,Book);
                char Choice;
                cout << "Add one to copies, subtract one, cancel: ";
                Choice = getchar(); cout << endl;
                switch(Choice){
                    case 'A':
                    case 'a': Book.CopiesInStock++;
                              WriteBook(BookFile, BookNum,Book);
                              break;
                    case 'S':
                    case 's': Book.CopiesInStock --;
                              WriteBook(BookFile, BookNum, Book);
                              break;
                    case 'C':
                    case 'c': cout << "Change Selected" <<endl;
                              break;       
                }
            }
      void AddBook(fstream & BookFile)
      /*Adds a book record to BookFile
        pre: book file is open for read/write
        post: book data entered by user appeneded to book file*/
        {
            BookType Book;
            cout << "Enter title: ";
            getline(cin, Book.Title);
            //cin >> Book.Title;
            cout << "Enter Author: ";
            //cin >> Book.Author;
            getline(cin,Book.Author);
            cout << "Enter Publisher: ";
            getline(cin,Book.Publisher);
            cout << "Enter Publication year: ";
            getline(cin,Book.PubYear);
            cout << "Enter number of copies: ";
            getline(cin, Book.CopiesInStock);
            WriteBook(BookFile,NumRecords(BookFile), Book);
        }
      void SearchBooks(fstream &BookFile){
          /*Displays a list of books containng a certain word
            pre: F is open for reading
            post: list of books with key word included is displayed*/
            string keyWord; // word they're looking for
            string S; // all words in file
            cout << "Enter a word from the title: ";
            cin >> keyWord;
            int count=0;
            BookType Book;
            while (std::getline (BookFile, S)){
                int pos = S.find(keyWord);
                if(pos >= 0){
                    cout << count << ". " << S << "\t";
                    std :: getline(BookFile, S);
                    cout << S << endl;
                }
            }
            BookFile.clear();
            BookFile.seekg(0, ios:: beg);




















            // while (std::getline(BookFile,S)){
            //     int pos = S.find(keyWord);
            //     if(pos>0){                                                           
            //         cout << i << ". " << S << "\t";
            //         std::getline(BookFile,S);
            //         cout << S << endl;
            //         i++;
            //     }
            // }
            // BookFile.clear(); 
            // BookFile.seekg(0,ios::beg);
            
      }
      void ListBooks(fstream &BookFile){
      /*Displys a list of the books in F
        pre: F is open for reading
        post: List of books displayed*/
        long i;
        for (i=0; i<NumRecords(BookFile); i++){
            BookType Book;
            ReadBook(BookFile,i,Book);
            ShowBook(i, Book);
        }
      }
      void PurgeBooks(fstream &BookFile){
          /*Removes all records from the file with zero copies in stack
            pre: file is open
            post : zero copy books are removed*/
        //copy all nonzero records to a new file, and then remove() and rename()
      }
      int main()
      {
          fstream BookFile("BookTest.txt", ios::in | ios::out);
          bool Quit = false;
          char Choice;
          do{
              cout <<"Add Title, change/Check, List, Search, Purge, Quit";
              Choice = getche();
              cout << endl;
              switch (Choice){
                  case 'A':
                  case 'a':AddBook(BookFile); break;
                  case 'C':
                  case 'c': ChangeBook(BookFile); break;
                  case 'L': 
                  case 'l':ListBooks(BookFile); break;
                  case 'S':
                  case 's': SearchBooks(BookFile); break;
                  case 'p':
                  case 'P': PurgeBooks(BookFile); break;
                  case 'Q':
                  case 'q':Quit = true; break;
                  default: cout << "Bad command" << endl;
              }
          }while(!Quit);
          /*cout << NumRecords(BookFile) << endl;
          BookType Book1,Book2;
          Book1.Title = "First Book!";
          Book1.Author = "Author Name";
          Book1.CopiesInStock = 12;
          WriteBook(BookFile, 0, Book1);
          ReadBook(BookFile, 0, Book2);
          cout << Book2.Title << "/" << Book2.Author << "/" << Book2.CopiesInStock << endl;
          cout << NumRecords(BookFile) << endl;
          cout << "Testing ListBooks function: ";
          ListBooks(BookFile);*/
          return(0);
      }
