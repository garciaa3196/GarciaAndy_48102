/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 17, 2016, 5:32 PM
 * Purpose:  Determine the total pay for a given amount of time worked
 */

//System Libraries Here
#include <iostream>     //Input/Output Library
#include <iomanip>      //Formatting
#include <cmath>        //Power
using namespace std;

//User Libraries Here

//Global Constants
const float CNVpd=100;    //Number of pennies in a dollar

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
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
    //Exit
    return 0;
}

