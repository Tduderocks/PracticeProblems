// Chapter 4 Reviews & Homework
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    /*// review 3 works :)
    int score;
    cout << "What was your score: " << endl;
    cin>>score;
    if(score==1)
    cout << "You got a hole in one!" <<endl;
    else
    cout << "you didn't get a hole in one" << endl;
    // review 6 works:)
    int a,b,c;
    cout << "Enter the value for a: " ;
    cin >> a;
    cout << "Enter the value for b: " ;
    cin >> b;
    cout << "Enter the value for c: " ;
    cin >> c;
    double dis = (b*b-4*a*c);
    cout << "a = " << a << " b = " << b << " c = " << c;
    if(dis < 0)
        cout << " One Root" << endl;
        else if(dis > 0)
        cout << " two roots"<< endl;
        else if(dis == 0)
        cout << " no roots" << endl;
    // review 7 works:)
    int Age = 2;
    if(Age > 5){
        if(Age >=18)
            cout << "Adult";
        }
        else cout << "Child\n";
    // review 8 works:)
    int strokes;
    cout << "How many strokes did you get on the Par5?: ";
    cin >> strokes; 
    if(strokes == 1){
        cout << "Hole in 1!\n";
    }
    if(strokes == 2){
        cout<<"Double Eagle \n";
    }
    if(strokes == 3){
        cout << "Eagle\n";
    }
    if(strokes ==4){
        cout << "Birdie\n";
    }
    if(strokes == 5){
        cout<< "Par\n";
    }
    if(strokes == 6){
        cout << "Bogey\n";
    }
    if(strokes == 7){
        cout << "Double - Bogey\n";
    }
    if(strokes == 8){
        cout << "Triple- Bogey\n";
    }
    if(strokes >=9)
        cout << "Disaster\n"; 
    // Review 9 works:)
    int height;
    cout << "What is your height:  " ;
    cin >> height ;
    if(height < 150)
        cout << "Short" << endl;
    else if((height > 150) &&(height < 175))
        cout << "Medium" << endl;
    else
        cout << "Tall" << endl;
    //Review 11 do I need to worry about conversions here?
    double Length,Wid,Hei;
    cout << "Enter the length in cm ";
    cin >> Length;
    cout << "Enter the Width in cm ";
    cin >> Wid;
    cout << "Enter the height in cm ";
    cin >> Hei;
    if((Length < 10 )||(Wid<10)||(Hei<10)) {
        cout << "Reject \n";
    }
    else{
        cout << "Accept \n";
    }
    //Review 12 works:)
    char Answer;
    cout<<"Circle Area Calculator\n";
    do{
        const double PI = 3.14159;
        double Radius;
        cout << "Enter the radius: ";
        cin >> Radius;
        cout << "Area is " << (PI*Radius*Radius)<<endl;
        cout << "Do another circle (Y/N)? ";
        cin >> Answer;
    } while((Answer == 'Y')||(Answer =='y'));
    cout << "Thanks for using the cirlce calculator" << endl;
    //Review 13 it works:)
    string Password;
    cout<<"Enter the password: ";
    cin >> Password;
    if(Password != "happiness"){
        cout << "Sorry incorrect, try again\n";
        do{
            cout << "Enter the password: ";
            cin >> Password;
         } while(Password != "happiness");   
    }
    if(Password == "happiness ");
        cout << "You got it!" << endl;
    //Review 14 works
    int Number;
    cout << "Enter a positive number: ";
    cin >> Number;
    while((Number < 0)||(Number > 10)){
        cout<<"Number must be between 1 and 10\n";
        cout << "Please re-enter:\n";
        cin>>Number;
    }
    //Review 15 works :)
    double RadiusC;
    int const x=0;
    while(RadiusC!=x){
        const double PI = 3.14159;
        cout << "Enter the radius(0 to quit): ";
        cin >> RadiusC;     
       if(RadiusC!=x){
        cout << "Area is " << (PI * RadiusC * RadiusC)<<endl;
       }
    }*/
    //review 17
   // if(RadiusC==x)
   // cout << "Thanks for using the circle Caclulator\n"; I dont konw
   /* int value;
    int NumberOfValues=0;
    int NumberOfValues2 =0;
    int SumOfValues=0;
    int SumOfValues2=0;
    const int Sentinel=0;
    const int y = 70;
    cout << "-Calculate Average Program-\n";
    cout << "Enter a value(" <<Sentinel << "to quit):";
    cin >> value;
    while(value!=Sentinel){
        NumberOfValues = NumberOfValues +1;
        SumOfValues = SumOfValues + value;        
        if(value<y){
            cout << value << " is less than " << Sentinel << endl;
            NumberOfValues2 +=1;
        }
        cout<<"Enter a value(" << Sentinel << "to quit): ";
        cin>>value;
    }
    cout << "Average is " << (double(SumOfValues)/NumberOfValues) << endl;
    cout << "Percentage below 70: "<< (double(NumberOfValues2)/double(NumberOfValues)*100.0) << "%" << endl;
   //Review 18 & 19 works :)
    int count = 0;
    int sum = 0;
    while(count < 12){
        count = count +1;
        cout << count << endl;
        sum = sum + count;
    }
    cout << "Sum = " << sum << endl;
    // Review 20 works :)
    for(int number=2;number<=20;number+=2)
        cout << number << endl;
    // Review 21 works :)
    for(int number2=20; number2>=0; number2--)
        cout << number2 << endl; */
    //Review 22 & ex 21 works :)
    int maximum, value, sum;
    sum=0;
    maximum=50;
    for(value = 1; value<=maximum;value++) {
        if(value%2!=0){
            sum = sum + value;
        }
        cout.setf(ios::left);
        cout.width(5);
        cout << value;
        cout.width(10);
        cout << sum << endl;
    }
    

    return(0);
}