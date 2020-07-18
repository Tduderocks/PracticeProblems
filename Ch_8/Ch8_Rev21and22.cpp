//chapter 8 Review 21: Review 22: builds but doesnt work
/*Election summary program
  allows entry and siplay of election results for a multiprestict election as precinct data is entered*/
  #include <iostream>
  #include <vector>
  #include <string>
  #include <stdlib.h>
  //#include "..\Eigen\Dense"
  //#include "..\Eigen\Sparse"
  #include"..\Eigen\Eigen"
  
  using namespace Eigen;
  using namespace std;


  struct ResultsType {
      int NumCandidates;
      int NumPrecincts;
      vector<string>Candidates;
      Matrix<double, Dynamic, Dynamic> Votes;
      ResultsType() //constructor
      {
        NumCandidates=3;
        NumPrecincts=5;
        Votes<<NumCandidates,NumPrecincts;
        Candidates[NumCandidates];
      }
  };
   void LoadNames(ResultsType &R)
   /*promts user to enter all candidtates names, and stores them in results
     post: candidates names are sorted in results*/
     {
         for (int CNum=0; CNum<R.NumCandidates; CNum++){
             cout << "Enter name for candidate" << (CNum +1) <<":";
             cin>>R.Candidates[CNum];
         }
     }
     void LoadAPrecinct(ResultsType &R)
     /*prompts user t ochoose a precinct, and then prompts for and stores votes
       for each candidate for that precinct
       post: votes entererd for a precinct*/
    {
        int UserPct;
        cout << "What precinct?";
        cin >> UserPct;
        int PctNum = UserPct - 1;
        for(int CNum=0; CNum<R.NumCandidates;CNum++){
            cout <<"Enter votes for this rpecinct for" << R.Candidates[CNum] << ":";
            cin>> R.Votes(CNum,PctNum);
        }
    }
    void DiplayCanidateRow(const ResultsType &R, int CNum, const int CField, const int VField)
    /*Displays data for one cadidate in the format: name p1 p2 p3..total
      pre: 0<=Cnum < R.Numcanddidtes
      post: data for candidate Cnum displayed*/
      {
      cout.setf(ios::left);
      cout.width(CField); cout << R.Candidates[CNum];
      cout.setf(ios::right);
      int Total=0;
      for (int PNum=0; PNum<R.NumPrecincts; PNum++){
          cout.width(VField); cout <<R.Votes(CNum,PNum);
          Total = Total +R.Votes(CNum,PNum);
      }
      cout.width(VField); cout << Total << endl;
      }
      void DisplayAll(const ResultsType &R)
      /*Displays all data entered as well as totals for each candidate
        post: candidate names, votes and total votes displayed*/
        {
            const int CandidateField =10;
            const int VotesField = 6;
            //display headings
            cout.setf(ios::left);
            cout.width(CandidateField); cout << "Candidate";
            cout.setf(ios::right);
            for(int PNum=0; PNum<R.NumPrecincts;PNum++){
                cout.width(VotesField); cout << (PNum +1);
            }
            cout.setf(ios::right);
            cout.width(VotesField); cout << "Total" << endl;
            //Display Rows
            for(int CNum=0; CNum<R.NumCandidates;CNum++)
            DiplayCanidateRow(R, CNum, CandidateField, VotesField);
        }
        int main()
        {
            ResultsType Results;
            bool Quit = false;
            LoadNames(Results);
            do{
                cout << endl;
                char Choice;
                cout << "Enter precinct, Display Results, Quit: ";
                cin >> Choice;
                switch (Choice){
                    case 'E':
                    case 'e': LoadAPrecinct(Results); break;
                    case 'D':
                    case 'd': DisplayAll(Results); break;
                    case 'Q':
                    case 'q': Quit = true; break;
                }
            }while (!Quit);
            return(0);
        }

