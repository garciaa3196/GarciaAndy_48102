/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on November 17, 2016, 6:27 PM
 * Purpose: Find the average test score after dropping the lowest score
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
#include <iomanip>      //Formatting
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes
void getScr(int &,int &,int &,int &,int &); //Get the scores
float AvgM1(int,int,int,int,int);     //Average score w/o minimum
int  getMin(int,int,int,int,int);     //Find minimum score      

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int s1,s2,s3,s4,s5;     //Test Scores
    float avg;              //Average Score
    
    //Input values
    getScr(s1,s2,s3,s4,s5);
    
    //Process Values -> Map Inputs to Outputs
    avg=AvgM1(s1,s2,s3,s4,s5);
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The average minus lowest score = "<<avg<<endl;
    
    //Exit
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************  Get Score  ****************************************
//Purpose:  Find minimum of 5 scores
//Input&Output:   Inputs to the function here -> Description, Range, Units
//  s1-s5-> 5 scores between [0,100]
//******************************************************************************
void  getScr(int &s1,int &s2,int &s3,int &s4,int &s5){
    //Get data and determine if valid for each score
    int x;
    do{
        cout<<"Input score 1 between 0 and 100"<<endl;
        cin>>x;
    }while(x<0||x>100);
    s1=x;
    do{
        cout<<"Input score 2 between 0 and 100"<<endl;
        cin>>x;
    }while(x<0||x>100);
    s2=x;
    do{
        cout<<"Input score 3 between 0 and 100"<<endl;
        cin>>x;
    }while(x<0||x>100);
    s3=x;
    do{
        cout<<"Input score 4 between 0 and 100"<<endl;
        cin>>x;
    }while(x<0||x>100);
    s4=x;
    do{
        cout<<"Input score 5 between 0 and 100"<<endl;
        cin>>x;
    }while(x<0||x>100);
    s5=x;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Get Min   ****************************************
//Purpose:  Find minimum of 5 scores
//Inputs:   Inputs to the function here -> Description, Range, Units
//  s1-s5-> 5 scores between [0,100]
//Output:   Outputs to the function here -> Description, Range, Units
//  min ->  Minimum of 5 scores
//******************************************************************************
int getMin(int s1,int s2,int s3,int s4,int s5){
    int min=s1;
    if(min>s2){
        min=s2;
    }
    if(min>s3){
        min=s3;
    }
    if(min>s4){
        min=s4;
    }
    if(min>s5){
        min=s5;
    }
    return min;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Get Min   ****************************************
//Purpose:  Find minimum of 5 scores
//Inputs:   Inputs to the function here -> Description, Range, Units
//  s1-s5-> 5 scores between [0,100]
//Output:   Outputs to the function here -> Description, Range, Units
//  avg -> Average score w/ minimum
//******************************************************************************
float AvgM1(int s1,int s2,int s3,int s4,int s5){
    return .25f*(s1+s2+s3+s4+s5-getMin(s1,s2,s3,s4,s5));
}

