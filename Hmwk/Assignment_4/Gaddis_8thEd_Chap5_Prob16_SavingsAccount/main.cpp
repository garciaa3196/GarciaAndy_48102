/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 18, 2016, 11:02 AM
 * Purpose:  Convert Celsius temperature to fahrenheit
 */

//System Libraries Here
#include <iostream>     //Input/Output Library
#include <iomanip>      //Formatting
using namespace std;

//User Libraries Here

//Global Constants
const float CNVPerc=100;    //Conversion for Percent
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned int startB,        //Starting Balance
            rate,               //Annual Interest rate as a %
            Yrate,              //Annual Interest as a decimal
            time,               //Time since account was established in months
            amDe,               //Amount Deposited each month
            amWi,               //Amount Withdrawn each month
            monRate,            //Monthly Interest Rate
            count,              //Counter
            Bal,                
            EarnInt,            //Interest earned
            FinalB,             //Final Balance
            MonBal;
    
    //Input Values - Starting Balance,Interest rate, Time passed
    cout<<"Input the balance you started with"<<endl;
    cin>>startB;
    cout<<"Input the interest rate"<<endl;
    cin>>rate;
    cout<<"Input the time that passed in months"<<endl;
    cin>>time;
    
   //Process/Calculations
    Yrate=rate/CNVPerc;
   //Loop
    for(count=1;count<=time;count++){
        cout<<"------------"<<endl;
        cout<<"Month "<<count<<endl;
        cout<<"------------"<<endl;
        cout<<"Input the amount deposited this month"<<endl;
        cin>>amDe;
        if(amDe<0){
            cout<<"Error - Negative Value not allowed"<<endl;
            return 1;
        }
        cout<<"Input the amount withdrawn this month"<<endl;
        cin>>amWi;
        if(amWi<0){
            cout<<"Error - Negative Value not allowed"<<endl;
            return 1;
        }
        monRate=Yrate/12;
        Bal=startB+amDe-amWi+(monRate*startB);
        EarnInt=Bal-startB;
    }
    
    cout<<"Monthly Interest Rate: "<<monRate*CNVPerc<<"%"<<endl;
    cout<<"Interest Earned: "<<EarnInt<<endl;
    
    
    //Exit
    return 0;
}

