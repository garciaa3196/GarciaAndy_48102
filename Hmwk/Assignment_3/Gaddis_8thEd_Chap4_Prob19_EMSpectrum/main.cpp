/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on September 29, 2016, 11:55 AM
 * Purpose: To determine the type of light on the 
            EM spectrum given the wavelength 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float waveL;
    
    //Input or initialize values Here
    cout<<"Input the wavelength of radiation in meters"<<endl;
    cout<<"This program determines the band of radiation"<<endl;
    cin>>waveL;
    
    //Process/Calculations Here
    cout<<((waveL>1e-2f) ?"Radio Band":
          (waveL>1e-3f) ?"Microwave Band":
          (waveL>7e-7f) ?"Infrared Band":
          (waveL>4e-7f) ?"Visible Band":
          (waveL>1e-8f) ?"Ultra-Violet Band":
          (waveL>1e-11f) ?"X-Ray Band":"Gamma-Ray Band")<<endl;
    
    //Exit
    return 0;
}

