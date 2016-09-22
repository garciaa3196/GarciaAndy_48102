/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on September 22, 2016, 12:07 PM
 * Purpose: Calculate the number of slices that a round pizza of 
 *          any size can have
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
#include <iomanip>      //Formatting
using namespace std;

//User Libraries 

//Global Constants
float PI=3.14159;        //Value of Pi

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables with Initialization
    float Dmeter,         //Diameter of pizza
          Radius,         //Radius of pizza 
          AreaS=14.125,   //Area of a single slice of pizza in inches
          Slices,         //Slices of pizza  
          Area;           //Area of the entire pizza    
    //Input values Here
    cout<<"What is the diameter of the pizza in inches"<<endl;
    cin>>Dmeter;
    
    //Process/Calculations Here
    Radius=Dmeter/2;
    Area=PI*Radius*Radius;  //Formula for area of a round pizza
    Slices=Area/AreaS;
    
    //Output Located Here
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<"Diameter of Pizza  = "<<Dmeter<<" in."<<endl;
    cout<<"Radius of Pizza    = "<<Radius<<" in."<<endl;
    cout<<"Area of Pizza      = "<<Area << " sq. inches"<<endl;
    cout<<"Area of each slice = "<<AreaS<<" sq. inches"<<endl;
    cout<<fixed<<showpoint<<setprecision(0)<<endl;
    cout<<"Number of slices   = "<<Slices<<endl;
    
    //Exit
    return 0;
}

