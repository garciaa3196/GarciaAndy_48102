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

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
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
    
    //Exit
    return 0;
}

