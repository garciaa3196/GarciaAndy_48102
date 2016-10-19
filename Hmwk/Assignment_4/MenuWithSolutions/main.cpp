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
#include <fstream>    //File I/O
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
        cout<<"6.  Type 6  for Gaddis 8thEd Chap5 Prob2 ASCII Code"<<endl;
        cout<<"7.  Type 7  for Gaddis 8thEd Chap5 Prob22 Square Display"<<endl;
        cout<<"8.  Type 8  for Gaddis 8thEd Chap5 Prob16 Savings Account"<<endl;
        cout<<"9.  Type 9  for Gaddis 8thEd Chap5 Prob25 Savings Account(file)"<<endl;
        cout<<"10. Type 10 for Gaddis 8thEd Chap5 Prob12 Temperature"<<endl;
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
                        growth,     //Population Growth
                        days,       //Number of days passed
                        count;      //Counter
                float   rate;       //Growth as a decimal

                //Input Values
                cout<<"Input the initial size of the population"<<endl;
                cin>>PIsize;
                cout<<"Input the growth as a positive integer"<<endl;
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
                int rows=10,   //Number of rows  in pattern
                    m=1,    
                    p=1;    

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
                cout<<"ASCII Code for 0-127"<<endl;
                 //Declare all Variables Here
                    char  ascii;
                    int count=0;      //Counter for characters per line


                    //Loop
                    for (char ascii=0;ascii<127;ascii++){
                        cout<<ascii<<" ";
                        count++;
                        if(count==16){          //New line
                            cout<<endl;
                            count=0;
                        }

                    }
                    cout<<endl;

                    //Exit
                break;
            }
            case 7:{
                cout<<"Square Display"<<endl;
                int  number,    //Size of square
                    r,         //Rows
                    c;         //Columns

               //Input Values - Starting Balance,Interest rate, Time passed
               cout<<"Input a positive integer no greater than 15"<<endl;
               cin>>number;
               if(number<1){
                   number=1;
               }
               else if(number>15){
                   number=15;
               }
               //Loop
               for(int r=1;r<=number;r++){
                   for(int c=1;c<=number;c++){
                       cout<<"X";
                   }
                   cout<<"\n";
               }
                break;
            }
            case 8:{
                cout<<"Savings Account Balance"<<endl;
                //Declare all Variables Here
                float   startB,             //Starting Balance
                        Depo,               //Amount deposited
                        totDepo,            //Total amount deposited
                        With,               //Amount withdrawn
                        totWith,            //Total amount withdrawn
                        totBal,             //Total Balance 
                        rate,               //Annual Interest rate as a decimal
                        monRate,            //Monthly Interest Rate
                        EarnInt=0;          //Total Interest Earned
                int     months,             //Time since account was established in months
                        count;              //Counter

                //Input Values - Starting Balance,Interest rate, Time passed
                cout<<"Input the balance you started with"<<endl;
                cin>>startB;
                cout<<"Input the interest rate (ex. .07)"<<endl;
                cin>>rate;
                cout<<"Input the time that passed in months"<<endl;
                cin>>months;

               //Process/Calculations
                totBal=startB;          //Total Balance to start
                monRate=rate/12;

                //Loop
                for(int count=1;count<=months;++count){
                    cout<<"------------"<<endl;
                    cout<<"Month "<<count<<endl;
                    cout<<"------------"<<endl;
                    cout<<"Input the amount deposited this month"<<endl;
                    cin>>Depo;
                    totDepo+=Depo;      //Gives total amount deposited
                    totBal+=Depo;       //Adds deposited amount to balance

                    cout<<"Input the amount withdrawn this month"<<endl;
                    cin>>With;
                    totWith+=With;      //Gives total amount withdrawn
                    totBal-=With;       //Subtracts withdrawn amount to balance
                    EarnInt+=(totBal*monRate);
                    totBal+=(monRate*totBal);
                    //Input Validation
                    if(Depo<0||With<0||totBal<0){
                        cout<<"Error - Negative Value/Balance not allowed"<<endl;
                        exit(1);
                    }
                }
                cout<<"---------------------"<<endl;
                cout<<"Totals after Month "<<months<<endl;
                cout<<"---------------------"<<endl;
                cout<<fixed<<showpoint<<setprecision(2);
                cout<<"Total Balance: $"<<totBal<<endl;
                cout<<"Total amount deposited: $"<<totDepo<<endl;
                cout<<"Total amount withdrawn: $"<<totWith<<endl;
                cout<<"Total Interest Earned: $"<<EarnInt<<endl;
                break;
            }
            case 9:{
                cout<<"Savings Account (save to file)"<<endl;
                float   startB,             //Starting Balance
                        Depo,               //Amount deposited
                        totDepo,            //Total amount deposited
                        With,               //Amount withdrawn
                        totWith,            //Total amount withdrawn
                        totBal,             //Total Balance 
                        rate,               //Annual Interest rate as a decimal
                        monRate,            //Monthly Interest Rate
                        EarnInt=0;          //Total Interest Earned
                int     months,             //Time since account was established in months
                        count;              //Counter
                ofstream file;

                //Input Values - Starting Balance,Interest rate, Time passed
                cout<<"Input the balance you started with"<<endl;
                cin>>startB;
                cout<<"Input the interest rate (ex. .07)"<<endl;
                cin>>rate;
                cout<<"Input the time that passed in months"<<endl;
                cin>>months;

               //Process/Calculations
                totBal=startB;          //Total Balance to start
                monRate=rate/12;

                //Loop
                for(int count=1;count<=months;++count){
                    cout<<"------------"<<endl;
                    cout<<"Month "<<count<<endl;
                    cout<<"------------"<<endl;
                    cout<<"Input the amount deposited this month"<<endl;
                    cin>>Depo;
                    totDepo+=Depo;      //Gives total amount deposited
                    totBal+=Depo;       //Adds deposited amount to balance

                    cout<<"Input the amount withdrawn this month"<<endl;
                    cin>>With;
                    totWith+=With;      //Gives total amount withdrawn
                    totBal-=With;       //Subtracts withdrawn amount to balance
                    EarnInt+=(totBal*monRate);
                    totBal+=(monRate*totBal);
                    //Input Validation
                    if(Depo<0||With<0||totBal<0){
                        cout<<"Error - Negative Value/Balance not allowed"<<endl;
                        exit(1);
                    }
                }
                cout<<"---------------------"<<endl;
                cout<<"Totals after Month "<<months<<endl;
                cout<<"---------------------"<<endl;
                cout<<fixed<<showpoint<<setprecision(2);
                cout<<"Total Balance: $"<<totBal<<endl;
                cout<<"Total amount deposited: $"<<totDepo<<endl;
                cout<<"Total amount withdrawn: $"<<totWith<<endl;
                cout<<"Total Interest Earned: $"<<EarnInt<<endl;

                //Open File
                file.open("Savings.txt");
                file<<"---------------------"<<"\r\n";
                file<<"Totals after Month "<<months<<"\r\n";
                file<<"---------------------"<<"\r\n";
                file<<fixed<<showpoint<<setprecision(2);
                file<<"Total Balance: $"<<totBal<<"\r\n";
                file<<"Total amount deposited: $"<<totDepo<<"\r\n";
                file<<"Total amount withdrawn: $"<<totWith<<"\r\n";
                file<<"Total Interest Earned: $"<<EarnInt<<endl;

                //Close file
                file.close();
                break;
            }
            case 10:{
                cout<<"Temperature Conversions from 0-20 degrees Celsius"<<endl;
                 float TempC,TempF;
    
                cout<<"Celsius   Fahrenheit"<<endl;
                cout<<"---------------------"<<endl;
                //Loop
                 do{
                     TempC++;
                     TempF=(TempC*9)/5+32;     //Formula to convert from celsius to fahrenheit
                     cout<<fixed<<showpoint<<setprecision(1);
                     cout<<TempC<<"            "<<TempF<<endl;
                 }while(TempC>=0&&TempC<20);

                break;
            }//End Case
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}