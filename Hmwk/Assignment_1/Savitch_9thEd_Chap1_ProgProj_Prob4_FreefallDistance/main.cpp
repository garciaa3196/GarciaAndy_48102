/* 
  File:   main.cpp
  Author: Andy Garcia
  Created on September 18, 2016, 11:45 AM
  Purpose: Calculate how far an object will travel in freefall
 */
//System Libraries
#include <iostream>     //Standard Input-Output Library
using namespace std;    //Most system libraries under the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    short 
        Accel=32,  //Acceleration due to gravity in ft/s^2
        Time,   //Time that the object traveled in seconds
        Dist;   //Distance the object traveled in feet
    
    //Initialize or input values
    cout<<"How long is the object falling in seconds"<<endl;
    cin>>Time;
    
    //Process the input by mapping to the output
    Dist=(Accel*Time*Time)/2;
    
    //Display Information
    cout<<"Acceleration of object = "<<Accel<<" ft/s^2"<<endl;
    cout<<"Time passed = "<<Time<<" seconds"<<endl;
    cout<<"Distance traveled = "<<Dist<<" feet"<<endl;
    
    //Exit Program
    return 0;
}

