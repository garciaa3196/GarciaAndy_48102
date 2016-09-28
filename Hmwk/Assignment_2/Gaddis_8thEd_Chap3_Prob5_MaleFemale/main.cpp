/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on September 28, 2016, 2:21 PM
 * Purpose: Determine the percentage of males and females registered in a class
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
#include <iomanip>      //Formatting
using namespace std;

//User Libraries 

//Global Constants
const char Percent=100;         //Conversion to percent

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables with Initialization
    unsigned short male,       //Number of males
                   female,     //Number of females
                   total;      //Total number of students
    char   PercM,              //Percent of males
           PercF;              //Percent of females
    
    //Input values Here
    cout<<"How many males are registered in a class?"<<endl;
    cin>>male;
    cout<<"Females?"<<endl;
    cin>>female;
    
    //Process/Calculations Here
    total=male+female;       //Total amount of students
    PercM=male*Percent/total;        //Percent of males
    PercF=female*Percent/total;      //Percent of females
    
    //Output Located Here
    cout<<"Number of males          = "<<male<<endl;
    cout<<"Number of females        = "<<female<<endl;
    cout<<"Total number of students = "<<total<<endl;
    cout<<"Percent of males         = "<<static_cast<int>(PercM)<<"%"<<endl;
    cout<<"Percent of females       = "<<static_cast<int>(PercF)<<"%"<<endl;
    
    //Exit
    return 0;
}

