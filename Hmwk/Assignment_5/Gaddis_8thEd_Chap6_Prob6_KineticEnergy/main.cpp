/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on November 18, 2016, 1:10 AM
 * Purpose: Determine the Kinetic Energy for a mass and a velocity 
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes
float KinErgy(float &,float &);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float mass,vlcity,KinE;
    
    //Input Values
    cout<<"This program calculates the Kinetic Energy in a moving object"<<endl;
    cout<<"Enter the mass of the object in kilograms"<<endl;
    cin>>mass;
    cout<<"Enter the velocity of the object in meters/second"<<endl;
    cin>>vlcity;
    
    //Process Values
    KinE=KinErgy(mass,vlcity);
    
    //Display Output
    cout<<"The Kinetic Energy is "<<KinE<<" Joules"<<endl;
    //Exit
    return 0;
}
float KinErgy(float &mass,float &vlcity){
    return .5*mass*vlcity*vlcity;
}