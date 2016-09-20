/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on September 20, 2016, 12:13 PM
 * Purpose:  Use Trigonometric Functions
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
#include <iomanip>      //Formatting
#include <cmath>        //Sin Cos Tan
using namespace std;

//User Libraries 

//Global Constants
const float PI=4*atan(1.0);     //Pi
const float CNVDEGR=PI/180;     //Conversion from degrees to radians
//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float deg,
          radians;
    //Set the values
    deg=0;
    radians=deg*CNVDEGR;  
    
    //Display Output
    cout<<"[Degrees,  Radians,    Sine,  Cosine, Tangent]"<<endl;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Set the values
    deg+=5;
    radians=deg*CNVDEGR;  
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    //Set the values
    deg+=5;
    radians=deg*CNVDEGR;  
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Set the values
    deg+=5;
    radians=deg*CNVDEGR;  
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;

    //Set the values
    deg+=5;
    radians=deg*CNVDEGR;  
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Set the values
    deg+=5;
    radians=deg*CNVDEGR;  
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Set the values
    deg+=5;
    radians=deg*CNVDEGR;  
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Set the values
    deg+=5;
    radians=deg*CNVDEGR;  
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Set the values
    deg+=5;
    radians=deg*CNVDEGR;  
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Set the values
    deg+=5;
    radians=deg*CNVDEGR;  
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Set the values
    deg+=5;
    radians=deg*CNVDEGR;  
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Exit
    return 0;
}

