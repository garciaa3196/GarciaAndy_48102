/* 
  File:   main.cpp
  Author: Andy Garcia
  Created on September 14, 2016, 8:29 PM
  Purpose: Calculate the monetary value of the coins inputted in cents
 */

//System Libraries
#include <iostream>     //Standard Input-Output Library
using namespace std;    //Most system libraries under the standard namespace

//User Libraries

//Global Constants
const float CNVtS=100;   //Conversion from cents to dollars

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    short q,n,d,Money;
    short Qrtr=25;   //Value of a Quarter in cents
    short Nikl=5;   //Value of a Nickel in cents
    short Dime=10;   //Value of a Dime in cents
    
    //Initialize or input values
    cout<<"How many quarters do you have"<<endl;
    cin>>q;
    cout<<"How many dimes do you have"<<endl;
    cin>>d;
    cout<<"How many nickels do you have"<<endl;
    cin>>n;
    //Process the input by mapping to the output
    Money=(q*Qrtr)+(n*Nikl)+(d*Dime);    //Total Value of money in cents
    //Display Information
    cout<<"Number of quarters(25¢) = "<<q<<endl;
    cout<<"Number of dimes(10¢) = "<<d<<endl;
    cout<<"Number of nickels(5¢) = "<<n<<endl;
    cout<<"Total amount of money = "<<Money<<" cents"<<endl;
    
    //Exit Program
    return 0;
}

