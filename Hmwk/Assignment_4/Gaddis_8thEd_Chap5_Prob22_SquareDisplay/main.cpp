/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 18, 2016, 11:02 AM
 * Purpose: Calculate the total balance, interest earned, and amount deposited
 *          and withdrawn
 */

//System Libraries Here
#include <iostream>     //Input/Output Library
#include <iomanip>      //Formatting
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float   startB,             //Starting Balance
            Depo,               //Amount deposited
            totDepo,            //Total amount deposited
            With,               //Amount withdrawn
            totWith,            //Total amount withdrawn
            totBal,             //Total Balance 
            rate,               //Annual Interest rate as a decimal
            monRate,            //Monthly Interest Rate
            monInt,             //Monthly Interest Earned
            EarnInt;            //Total Interest Earned
    int     time,               //Time since account was established in months
            count;              //Counter
                    
    //Input Values - Starting Balance,Interest rate, Time passed
    cout<<"Input the balance you started with"<<endl;
    cin>>startB;
    cout<<"Input the interest rate (ex. .07)"<<endl;
    cin>>rate;
    cout<<"Input the time that passed in months"<<endl;
    cin>>time;
    
   //Process/Calculations
    totBal=startB;          //Total Balance to start
    monRate=rate/12;
    
    //Loop
    for(int count=1;count<=time;++count){
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
        if(Depo<0||With<0||startB<0){
            cout<<"Error - Negative Value not allowed"<<endl;
            exit(1);
        }
    }
    cout<<"---------------------"<<endl;
    cout<<"Totals after Month "<<time<<endl;
    cout<<"---------------------"<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Total Balance: $"<<totBal<<endl;
    cout<<"Total amount deposited: $"<<totDepo<<endl;
    cout<<"Total amount withdrawn: $"<<totWith<<endl;
    cout<<"Total Interest Earned: $"<<EarnInt<<endl;
    
    //Exit
    return 0;
}

