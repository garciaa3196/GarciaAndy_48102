/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on November 18, 2016, 2:39 PM
 * Purpose: Determine the gross pay for each employee
 */

//System Libraries
#include <iostream>     //Input/Output Objects
#include <iomanip>      //Formatting
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int getPay(int [],float [],int [],float [],int &);
void data(int [],int [],float [],float [],int &);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int SIZE=7;
    int emplyID[SIZE]={5658845,4520125,7895122,8777541,8451277,1302850,7580489};
    int hours[SIZE];
    float payrate[SIZE],wages[SIZE];

    //Input Hours and Pay Rate to determine wages
    getPay(hours,payrate,emplyID,wages,SIZE);
    
    //Display Output
    data(emplyID,hours,payrate,wages,SIZE);
    
    //Exit
    return 0;
}
int getPay(int hours[],float payrate[],int emplyID[],float wages[],int &SIZE){
    
    //Fill Hours and pay rate arrays
    for(int i=0;i<SIZE;i++){
        cout<<emplyID[i]<<endl;
        cout<<"How many hours has this employee worked?"<<endl;
        cin>>hours[i];
        cout<<"What is this employee's pay rate in dollars?"<<endl;
        cin>>payrate[i];
        //Determine wages for employee
        wages[i]=hours[i]*payrate[i];
    }
}
void data(int emplyID[],int hours[],float payrate[],float wages[],int &SIZE){
    cout<<"Employee ID     Hours         Pay Rate           Wages"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<emplyID[i]<<setw(14)<<hours[i]<<setw(12)<<"$"<<fixed<<
                setprecision(2)<<payrate[i]<<setw(10)<<"$"<<wages[i]<<endl;
    }
}