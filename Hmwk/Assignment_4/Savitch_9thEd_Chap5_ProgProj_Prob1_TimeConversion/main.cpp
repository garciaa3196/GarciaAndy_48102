/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 11, 2016, 9:52 AM
 * Purpose:  Convert 24-hour notation to 12-hour notation
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
    unsigned short  hour24,     //24-Hour time
                    hour12,     //12-Hour time
                    min;        //Minutes
    
    //Input or initialize values
    do{
    cout<<"Input the hours then minutes in 24-hour notation"<<endl;
    cin>>hour24;
    cin>>min;
    
    //Process/Calculations Here
    hour12=hour24-12;        //Convert 24-hour to 12-hour
    //Output Located Here
    
        if(hour24>12){        
            cout<<"The time in 24 hour notation is "<<setw(2)
                    <<hour24<<":"<<min<<endl;
            cout<<"The time in 12 hour notation is "<<setw(2)
                    <<hour12<<":"<<min<<" PM"<<endl;
        }
        else{
            cout<<"The time in 24 hour notation is "<<setw(2)
            <<hour24<<":"<<min<<endl;
            cout<<"The time in 12 hour notation is "<<setw(2)
            <<hour12<<":"<<min<<" AM"<<endl;
        }
    }while(hour24>=0&&hour24<=24);    
    //Exit
    return 0;
}
