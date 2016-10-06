/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 6, 2016, 11:54 AM
 * Purpose:  Calculate your weight
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants
float   GRAVITY=6.673e-8f,      //Universal Gravity Constant (cm^3/g/sec^2)
        CNKGGRM=1000,            //Conversion from kg to grams
        CNSGGRM=14593.9,        //Conversion from Slugs to grams
        CNKMMET=1000,           //Conversion from Km to meters
        CNMETCM=100,            //Conversion from meters to centimeters
        CNDYNLB=2.24809e-6f,    //COnversion from Dynes to Pounds
        CNVSGLB=32.1741;        //Conversion from slugs to lbs

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float   msEarth=5.972e24,       //Found on Google - in Kilograms
            msMark=6,               //Mass of Mark - in Slug
            radius=6371.0f,         //Radius of the Earth
            weight;                 //Force of attraction from physics
    
    //COnversion of inputs
    msEarth*=CNKGGRM;           //Convert mass of the earth to grams
    msMark*=CNSGGRM,            //Convert mass of Mark to grams
    radius*=CNKMMET*CNMETCM;   //Convert radius of the earth to centimeters
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    weight=GRAVITY*msMark*msEarth/radius/radius;    //Weak force attraction due 
                                                    //to gravity
    weight*=CNDYNLB;        //Convert dynes to pounds
    
    //Output Located Here
    cout<<"The mass of the Earth is "<<msEarth<<" Kg"<<endl;
    cout<<"The mass of Mark is "<<msMark<<" Kg"<<endl;
    cout<<"According to the Weak Force of Gravity, Mark weighs "
            <<weight<<" pounds."<<endl;
    cout<<"As a check, Mark weighs "<<6*CNVSGLB<<" pounds."<<endl;
    cout<<"The percent error in the radius of earth is +- "<<100.0f*18/6371<<"%"<<endl;
    cout<<"The margin of error for the weight = "<<(weight-6*CNVSGLB)/weight*100.0f<<"%"<<endl;

    //Exit
    return 0;
}

