/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 4, 2016, 7:45 PM
 * Purpose: Calculate the time it takes for a sound wave to travel through 
 *          a chosen medium
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short choice,  //Range of 1-3
                    dist;   //Distance traveled by soundwave in feet
    float     air=1.1e3f,   //Approx. Speed of Sound in air (ft./sec)
            water=4.9e3f,   //Approx. Speed of Sound in water
            steel=1.64e4f,  //Approx. Speed of Sound in steel
                    time;
                 
    
    //Input desired medium
    cout<<"Select a medium"<<endl;
    cout<<"1. Air"<<endl;
    cout<<"2. Water"<<endl;
    cout<<"3. Steel"<<endl;
    cin>>choice;
    
    //Input Validation
    if(choice<=0||choice>3){
        cout<<"Error: Invalid value"<<endl;
        return 1;
    }
    
    //Input Distance
    cout<<"Input the distance traveled by the soundwave"<<endl;
    cin>>dist;
    
    //Input Validation
    if(dist<0){
        cout<<"Error: Invalid value"<<endl;
        return 1;
    }
 
    //Process Values - Map Inputs to Outputs
        switch(choice){
            case 1:
            time=dist/air;
            cout<<"Speed of Sound in air = "<<air<< " ft/s"<<endl;
            cout<<"Distance traveled = "<<dist<<" feet"<<endl;
            cout<<fixed<<showpoint<<setprecision(4)<<endl;
            cout<<"Time passed = "<<time<<" seconds"<<endl;break;
            case 2:
            time=dist/water;
            cout<<"Speed of Sound in water = "<<water<< " ft/s"<<endl;
            cout<<"Distance traveled = "<<dist<<" feet"<<endl;
            cout<<fixed<<showpoint<<setprecision(4)<<endl;
            cout<<"Time passed = "<<time<<" seconds"<<endl;break;
            case 3:
            time=dist/steel;
            cout<<"Speed of Sound in air = "<<steel<< " ft/s"<<endl;
            cout<<"Distance traveled = "<<dist<<" feet"<<endl;
            cout<<fixed<<showpoint<<setprecision(4)<<endl;
            cout<<"Time passed = "<<time<<" seconds"<<endl;break;
        }    
       
    //Exit
    return 0;
}    

