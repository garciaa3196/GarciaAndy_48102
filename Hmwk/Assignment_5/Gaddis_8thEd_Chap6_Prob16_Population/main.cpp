/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on November 15, 2016, 12:32 PM
 * Purpose: Calculate the population size for a given year
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes
int popSize(int,float,float);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int Pop,birth,death,years;
    float bRate,dRate;
    
    //Input Values
    cout<<"This program measures population as a function of time"<<endl;
    cout<<"Population Size?"<<endl;
    cin>>Pop;
    cout<<"Birth Rate per year?"<<endl;
    cin>>birth;
    cout<<"Death Rate per year?"<<endl;
    cin>>death;
    cout<<"How many years pass?"<<endl;
    cin>>years;
    
    //Input Validation
    if(Pop<2||birth<0||death<0||years<1){
        cout<<"Invalid value - Please enter a valid value"<<endl;
        cout<<"Population Size?"<<endl;
        cin>>Pop;
        cout<<"Birth Rate per year?"<<endl;
        cin>>birth;
        cout<<"Death Rate per year?"<<endl;
        cin>>death;
        cout<<"How many years pass?"<<endl;
        cin>>years;
    }
    
    //Process Values -> Map Inputs to Outputs
    bRate=1.0f*birth/Pop;
    dRate=1.0f*death/Pop;
    for(int year=1;year<=years;year++){
        Pop=popSize(Pop,dRate,bRate);
        cout<<"Year "<<year<<" = population of "<<Pop<<endl;
    }
    
    //Exit
    return 0;
}
int popSize(int Pop,float death,float birth){
    return Pop*(1+birth-death);
}