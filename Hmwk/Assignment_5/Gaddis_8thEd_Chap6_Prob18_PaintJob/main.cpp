/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on November 17, 2016, 10:47 PM
 * Purpose:  
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
#include <iomanip>      //Formatting
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes
float getGal(float &,float &);
float getHour(float &,float &);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float gallon,hours,Pcost,Lcost,totCost,feet,price;
    int rooms;
    
    //Input Values
    cout<<"This program calculates gallons of paint required,hours of labor,"
            "cost of paint,cost of labor, and total cost"<<endl;
    cout<<"How many rooms are you painting?"<<endl;
    cin>>rooms;
    cout<<"How much is each gallon of paint?"<<endl;
    cin>>price;
    
    //Process Values
    for(int room=1;room<=rooms;room++){
        cout<<"What is the size in sq feet of room "<<room<<"?"<<endl;
        cin>>feet;
        getGal(gallon,feet);
        getHour(hours,feet);
    }
    
    //Calculations
    Pcost=price*gallon;
    Lcost=hours*25;
    totCost=Pcost+Lcost;
    
    //Display Output
    cout<<"Number of Gallons required: "<<gallon<<endl;
    cout<<"Number of Hours required:   "<<hours<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Cost of Paint:              $"<<Pcost<<endl;
    cout<<"Cost of Labor:              $"<<Lcost<<endl;
    cout<<"Total Cost of Job:          $"<<totCost<<endl;
    
    //Exit
    return 0;
}
float getGal(float &gallon,float &feet){
    return gallon+=feet/110;        //Gallons for number of feet
}
float getHour(float &hours,float &feet){
    hours=feet*8/110;
    return hours+=feet*8/110;     //Hours of labor for number of feet
}