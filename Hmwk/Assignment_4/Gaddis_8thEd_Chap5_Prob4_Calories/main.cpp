/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 11, 2016, 9:52 AM
 * Purpose:  Determine the number of calories for a given amount of minutes
 */

//System Libraries Here
#include <iostream>     //Input/Output Library
#include <iomanip>      //Formatting
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables
    float  cal=3.6;          //Calories burned per minute
    unsigned short TotCal;   //Total Calories Burned
                    
    
    //Loop             
    for(unsigned short min=0; min<=30; min+=5){
        TotCal=min*cal;
        cout<<TotCal<<" calories burned after "<<min<<" minutes"<<endl;
    }
 
    //Exit
    return 0;
}

