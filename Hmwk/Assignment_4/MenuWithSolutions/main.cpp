/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on October 10th, 9:30 AM
   Purpose:  Menu without Functions
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>      //log function
#include <cstdlib>
#include <ctime>
#include <iomanip>    //Formatting
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float CNVPerc=100;  //Conversion for Percent
const float CNVpd=100;    //Number of pennies in a dollar
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;    //Choice from menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for Gaddis 7thEd Chap5 Prob20 Guessing Game"<<endl;
        cout<<"2.  Type 2  for Gaddis 8thEd Chap5 Prob11 Population Growth"<<endl;
        cout<<"3.  Type 3  for Gaddis 8thEd Chap5 Prob4 Calories"<<endl;
        cout<<"4.  Type 4  for Gaddis 8thEd Chap5 Prob7 Salary Pay"<<endl;
        cout<<"5.  Type 5  for Gaddis 8thEd Chap5 Prob23 Pattern Displays"<<endl;
        cout<<"6.  Type 6  for Problem F"<<endl;
        cout<<"7.  Type 7  for Problem G"<<endl;
        cout<<"8.  Type 8  for Problem H"<<endl;
        cout<<"9.  Type 9  for Problem I"<<endl;
        cout<<"10. Type 10 for Problem J"<<endl;
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:{
                cout<<"Guessing Game"<<endl;
                //Set the random number seed
                srand(static_cast<unsigned int> (time(0)));
                //Declare all Variables
                int range,nGuess;
                int number,answer;

                //Input values
                cout<<"This is the guessing game"<<endl;
                cout<<"Choose a range for the number to guess"<<endl;
                cin>>range;

                //Process values -> Map inputs to Outputs
                nGuess=log(range)/log(2)+1;
                cout<<"You have "<<nGuess<<" guesses to find the random number"<<endl;
                number=rand()%(range+1);        //[0,range]

                //Display Output
                for(int guess=1;guess<=nGuess;guess++){
                    cout<<"Input your guess"<<endl;
                    cin>>answer;
                    if(answer>number)cout<<"Guess too high"<<endl;
                    else if(answer<number)cout<<"Guess too low"<<endl;
                    else{
                        cout<<"You guessed the number"<<endl;
                    }
                }
                break;
            }
            case 2:{
                cout<<"Population Growth"<<endl;
                 int     PIsize,     //Initial Population size
                        PFsize,     //Final Population size
                        growth,     //Population Growth as a %
                        days,       //Number of days passed
                        count;      //Counter
                float   rate;       //Growth as a decimal

                //Input Values
                cout<<"Input the initial size of the population"<<endl;
                cin>>PIsize;
                cout<<"Input the growth as a perentage (no negatives)"<<endl;
                cin>>growth;
                cout<<"Input the number of days passed"<<endl;
                cin>>days;

                //Input Validation
                if(PIsize<2){
                    cout<<"Error - Value must be greater than 2"<<endl;
                    return 1;
                }
                if(growth<0){
                    cout<<"Error - Value must be positive"<<endl;
                    return 1;
                }
                if(days<1){
                    cout<<"Error - Value must be greater than 1"<<endl;
                    return 1;
                }

                //Table Setup
                cout<<"Day #                    "<<"Size of Population"<<endl;
                cout<<"-------------------------------------------"<<endl;

                //
                for(int count=0;count<=days;count++){
                    rate=growth/CNVPerc;
                    PFsize=PIsize*exp(rate*count);
                    cout<<count<<"                         "<<PFsize<<endl;
                }            
                break;
            }
            case 3:{
                cout<<"Calories Burned"<<endl;
                float  cal=3.6;          //Calories burned per minute
                unsigned short TotCal;   //Total Calories Burned


                //Loop             
                for(unsigned short min=0; min<=30; min+=5){
                    TotCal=min*cal;
                    cout<<TotCal<<" calories burned after "<<min<<" minutes"<<endl;
                }
                break;
            }
            case 4:{
                cout<<"Salary Pay in Pennies"<<endl;
                //Declare all Variables
                unsigned int   day=0,   //Day counter
                             totdays,   //Total Days worked
                               penny;   //Initial Pay earned
                unsigned short count;   //Counter
                float        totpay;    //Total salary in dollars

                //Input Values
                cout<<"How many days did you work"<<endl;
                cin>>totdays;

                //Input Validation
                if(totdays<1){
                    cout<<"Error - Invalid Value"<<endl;
                    return 1;
                }
                //Table Setup
                cout<<"Day #                    "<<"Pay each day"<<endl;
                cout<<"------------------------------------"<<endl;

                //Day 1 starts at count=0
                for(unsigned short count=0;count<=(totdays-1);count++){
                    penny=pow(2,count);     
                    totpay=penny/CNVpd;
                    day++;
                    cout<<fixed<<showpoint<<setprecision(2);
                    cout<<day<<"                          "<<"$"<<totpay<<endl;    
                }
                break;
            }
            case 5:{
                cout<<"Pattern Displays"<<endl;
                //Declare all Variables
                char A='+';
                int rows,   //Number of rows  in pattern
                    m=1,    
                    p=1;    

                //Input Value
                cout<<"Input the number of rows"<<endl;
                cin>>rows;

                //Table Setup
                cout<<"----------------------"<<endl;
                cout<<"Pattern A"<<endl;
                cout<<"----------------------"<<endl;
                //Pattern A
                for(int m=1;m<=rows;m++){
                    for(int p=1;p<=m;p++){
                        cout<<A;
                    }
                    cout<<"\n";
                }
                cout<<endl;
                //Pattern B
                cout<<"----------------------"<<endl;
                cout<<"Pattern B"<<endl;
                cout<<"----------------------"<<endl;
                for(int m=rows;m>=1;m--){
                    for(int p=1;p<=m;p++){
                        cout<<A;
                    }
                    cout<<"\n";
                }
                break;
            }
            case 6:{
                cout<<"Inside Problem F"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 7:{
                cout<<"Inside Problem G"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 8:{
                cout<<"Inside Problem H"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 9:{
                cout<<"Inside Problem I"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 10:{
                cout<<"Inside Problem J"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }//End Case
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}