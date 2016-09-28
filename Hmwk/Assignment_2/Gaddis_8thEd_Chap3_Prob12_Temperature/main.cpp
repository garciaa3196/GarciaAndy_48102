/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on September 28, 2016, 1:33 PM
 * Purpose: Convert temperature in celsius to fahrenheit and kelvin
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
#include <iomanip>      //Formatting
using namespace std;

//User Libraries 

//Global Constants
short CNVK=273;          //Conversion for celsius to kelvin

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables with Initialization
    float TempC,      //Temperature in Celsius
          TempF,      //Temperature in Fahrenheit
          TempK;      //Temperature in Kelvin
    
    //Input values Here
    cout<<"What is the temperature in celsius?"<<endl;
    cin>>TempC;
    //Process/Calculations Here
    TempF=(9*TempC/5)+32;     //Equation to convert celsius to fahrenheit
    TempK=TempC+CNVK;         //Equation to convert celsius to kelvin
    
    //Output Located Here
    cout<<fixed<<showpoint<<setprecision(1)<<endl;
    cout<<"Temperature in Celsius    = "<<TempC<<endl;
    cout<<"Temperature in Fahrenheit = "<<TempF<<endl;
    cout<<"Temperature in Kelvin     = "<<TempK<<endl;
    
    //Exit
    return 0;
}

