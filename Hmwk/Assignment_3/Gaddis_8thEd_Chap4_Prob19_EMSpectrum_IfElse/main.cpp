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
    char  Band;
    
    //Input or initialize values Here
    cout<<"Input the wavelength of radiation in meters"<<endl;
    cout<<"This program determines the band of radiation"<<endl;
    cin>>waveL;
    
    //Process/Calculations Here
    if     (waveL>1e-2f)cout<<"Radio Band"<<endl;
    else if(waveL>1e-3f)cout<<"Microwave Band"<<endl;
    else if(waveL>7e-7f)cout<<"Infrared Band"<<endl;
    else if(waveL>4e-7f)cout<<"Visible Band"<<endl;
    else if(waveL>1e-8f)cout<<"Ultra-Violet Band"<<endl;
    else if(waveL>1e-11f)cout<<"X-Ray Band"<<endl;
    else                cout<<"Gamma-Ray Bad"<<endl;

    //Exit
    return 0;
}

