/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 4, 2016, 5:08 PM
 * Purpose: Calculate Body Mass Index for a given weight and height
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
    float       weight,     //Weight in pounds
                BMI;
    unsigned short height;  //Height in inches
    
    
    //Input or initialize values Here
    cout<<"Input your weight in pounds"<<endl;
    cin>>weight;
    cout<<"Input your height in inches"<<endl;
    cin>>height;
    
    //Input Validation
    if(weight<0){
        cout<<"Error: Please enter a positive value"<<endl;
        return 1;
    }
    if(height<0){
        cout<<"Error: Please enter a positive value"<<endl;
        return 1;
    }
    
    //Calculations Here
    BMI=(weight*703)/(height*height);   //Formula for BMI
    
    //Process Values - Map Inputs to Outputs
    cout<<"Weight = "<<weight<<" pounds"<<endl;
    cout<<"Height = "<<height<<" inches"<<endl;
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"Body Mass Index = "<<BMI<<endl;
    cout<<((BMI < 18.5)? "You are underweight":
          (BMI >= 18.5 && BMI <= 25)? "You are the optimal weight":
              "You are overweight")<<endl;
    
    
  
    //Exit
    return 0;
}

