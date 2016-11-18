/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on November 17, 2016, 7:47 PM
 * Purpose: Find the day of the week for a given date 
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
#include <cstdlib>      //Exit Return
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes
bool isLpYr(int);  //Leap Year?
int  getCVal(int); //Get the Century value
int  getYVal(int); //Get the Year value
int  getMVal(int,int);//Get the Month value
string dayOfWk(int,int,int);    //Gives day of week

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int Mon,Day,Yr;
    
    //Input values
    cout<<"Input a date(MM DD YY)"<<endl;
    cin>>Mon>>Day>>Yr;
    
    //Process Values - Map Inputs to Outputs
    cout<<"Day of the Week: "<<dayOfWk(Mon,Day,Yr)<<endl;
    
    //Exit
    return 0;
}
string dayOfWk(int m,int d,int y){
    int nDay=(d+getMVal(m,y)+getYVal(y)+getCVal(y))%7;
    switch(nDay){
        case 0:return "Sunday";
        case 1:return "Monday";
        case 2:return "Tuesday";
        case 3:return "Wednesday";
        case 4:return "Thursday";
        case 5:return "Friday";
        case 6:return "Saturday";
        default:return "Bad Day";
    }
}

int  getMVal(int m,int y){
    switch(m){
        case 1:return isLpYr(y)?6:0;
        case 2:return isLpYr(y)?2:3;
        case 3:case 11:return 3;
        case 4:case  7:return 6;
        case 9:case 12:return 5;
        case 5:return 1;
        case 6:return 4;
        case 8:return 2;
        case 10:return 0;
        default:cout<<"Bad number"<<endl;exit(1);
    }
}

int getYVal(int year){
    int dig2=year%100;
    return dig2+dig2/4;
}

int getCVal(int year){
    return 2*(3-(year/100)%4);
}

bool isLpYr(int year){
    return ((year%400==0)||((year%4==0)&&(year%100!=0)));
}
