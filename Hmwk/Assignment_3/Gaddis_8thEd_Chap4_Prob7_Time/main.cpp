/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 5, 2016, 6:02 PM
 * Purpose: Determine the number of minutes, hours, or days in a given number of
 *          seconds
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants
const short cnvSM=60,       //Conversion from seconds to minutes
            cnvSH=3600;     //Conversion from seconds to hours
const int   cnvSD=8.64e4;   //Conversion from seconds to days

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float          seconds,   //Number of seconds passed
                   min,       //Number of minutes passed
                   hour,      //Number of hours passed
                   day;       //Number of days passed
                 
    //Input Values
    cout<<"Input the number of seconds"<<endl;
    cin>>seconds;
    
    //Input Validation
    if (seconds<0){
        cout<<"Error: Invalid value"<<endl;
        return 1;
    }
    //Process Values - Map Inputs to Outputs
    if(seconds<60){
        cout<<"Number of seconds: "<<seconds<<endl;
    }
    else if(seconds>=60 && seconds<3600){
        min=seconds/cnvSM;         //Finds number of minutes
        cout<<"Number of seconds: "<<seconds<<endl;
        cout<<fixed<<showpoint<<setprecision(1);
        cout<<"Number of minutes: "<<min<<endl;
    }
    else if(seconds>=3600 && seconds<86400){
        min=seconds/cnvSM;
        hour=seconds/cnvSH;      //Finds number of hours 
        cout<<"Number of seconds: "<<seconds<<endl;
        cout<<fixed<<showpoint<<setprecision(1);
        cout<<"Number of minutes: "<<min<<endl;
        cout<<"Number of Hours: "<<hour<<endl;
    }
    else if(seconds>=86400){
        min=seconds/cnvSM;
        hour=seconds/cnvSH;      
        day=seconds/cnvSD;      //Finds number of days
        cout<<"Number of seconds: "<<seconds<<endl;
        cout<<fixed<<showpoint<<setprecision(1);
        cout<<"Number of minutes: "<<min<<endl;
        cout<<"Number of Hours: "<<hour<<endl;
        cout<<"Number of Days: "<<day<<endl;
    }
    
    //Exit
    return 0;
}    

