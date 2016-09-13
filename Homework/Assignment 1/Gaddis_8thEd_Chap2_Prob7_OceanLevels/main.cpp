/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on September 13, 2016, 11:50 AM
 * Purpose: To calculate when homeowners in Riverside will have 
            beach front property
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float MMtFt=304.8;    //Conversion milimeters to feet from Google
const float MMtM=1000;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables with initialization
    float rate=1.5;            //Sea Level rise rate in mm/year
    int nYear1=5,nYear2=7,nYear3=10;    //Years to calculate rise
    float rise1,rise2,rise3;            //Solutions for the 3 years above
    int nYrBF;                 //# of Years before home is Beach front property
    float elevRiv=860.0f;      //Elevation of Riverside in feet from Wikipedia
   
    //Process/Calculations Here
    rise1=rate*nYear1;
    rise2=rate*nYear2;
    rise3=rate*nYear3;
    nYrBF=elevRiv/rate*MMtFt;
    
    //Display Output
    cout<<"Rate of Ocean Level Rise = "<<rate<<"mm/year"<<endl;
    cout<<"After "<<nYear1<<" years the sea will rise "<<rise1<<" mm"<<endl;
    cout<<"After "<<nYear2<<" years the sea will rise "<<rise2<<" mm"<<endl;
    cout<<"After "<<nYear3<<" years the sea will rise "<<rise3<<" mm"<<endl;
    cout<<"At this rate Riverside will have beach front property in ";
    cout<<nYrBF<<" years"<<endl;
    cout<<"This rise equates to "<<nYrBF*rate/MMtM<<" meters"<<endl;

    //Exit
    return 0;
}

