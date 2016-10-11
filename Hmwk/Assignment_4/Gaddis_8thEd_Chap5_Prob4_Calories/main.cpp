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
    unsigned short  cal=3.6f,   //Calories burned per minute
                    min=0,        //Time spent burning calories
                    BCal;      //Total calories burned
                    
    //Input or initialize values
    
    
    //Process/Calculations Here             
    BCal=min*cal;
    for(unsigned short min=0; min==30; min+=5)
        BCal=min*cal;
        cout<<"The minutes spent burning calories is "<<min<<endl;
        cout<<"The amount of calories burned is "<<BCal<<endl;
    //Output Located Here
    
    //Exit
    return 0;
}

