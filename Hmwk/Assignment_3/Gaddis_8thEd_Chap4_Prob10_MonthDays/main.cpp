/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 4, 2016, 6:12 PM
 * Purpose: Calculate how many days are in a month for a given year
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
    unsigned short month,   //Range of 1-12
                    year;
    
    //Input or initialize values Here
    cout<<"Input a month(1-12):"<<endl;
    cin>>month;
    cout<<"Input a year:"<<endl;
    cin>>year;
    
    //Input Validation
    if(month>12||month<1){
        cout<<"Error"<<endl;
    }
    if(year<0){
        cout<<"Error"<<endl;
    }
    
    //Process Values - Map Inputs to Outputs
    switch(month){
        case 1: cout<<"Month: January"<<endl;
                cout<<"Year: "<<year<<endl;
                cout<<"Number of Days: 31"<<endl;break;
        case 2: cout<<"Month: February"<<endl;
                cout<<"Year: "<<year<<endl;
                if((year%4==0 && year%100 != 0)||(year%400==0)){
                    cout<<"Number of Days: 29"<<endl;
                }
                else{
                    cout<<"Number of Days: 28"<<endl;
                };break;    
        case 3: cout<<"Month: March"<<endl;
                cout<<"Year: "<<year<<endl;
                cout<<"Number of Days: 31"<<endl;break;
        case 4: cout<<"Month: April"<<endl;
                cout<<"Year: "<<year<<endl;
                cout<<"Number of Days: 30"<<endl;break;
        case 5: cout<<"Month: May"<<endl;
                cout<<"Year: "<<year<<endl;
                cout<<"Number of Days: 31"<<endl;break;
        case 6: cout<<"Month: June"<<endl;
                cout<<"Year: "<<year<<endl;
                cout<<"Number of Days: 30"<<endl;break;
        case 7: cout<<"Month: July"<<endl;
                cout<<"Year: "<<year<<endl;
                cout<<"Number of Days: 31"<<endl;break;
        case 8: cout<<"Month: August"<<endl;
                cout<<"Year: "<<year<<endl;
                cout<<"Number of Days: 31"<<endl;break;
        case 9: cout<<"Month: September"<<endl;
                cout<<"Year: "<<year<<endl;
                cout<<"Number of Days: 30"<<endl;break;
        case 10: cout<<"Month: August"<<endl;
                cout<<"Year: "<<year<<endl;
                cout<<"Number of Days: 31"<<endl;break;
        case 11: cout<<"Month: November"<<endl;
                cout<<"Year: "<<year<<endl;
                cout<<"Number of Days: 30"<<endl;break;
        case 12: cout<<"Month: December"<<endl;
                cout<<"Year: "<<year<<endl;
                cout<<"Number of Days: 31"<<endl;break;        
    }
    
    
  
    //Exit
    return 0;
}

