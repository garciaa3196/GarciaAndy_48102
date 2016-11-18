/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on October 10th, 9:30 AM
   Purpose:  Menu without Functions
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstdlib>
#include <ctime>
#include <iomanip>    //Formatting
#include <fstream>    //File I/O
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void getScr(int &,int &,int &,int &,int &); //Get the scores
float AvgM1(int,int,int,int,int);     //Average score w/o minimum
int  getMin(int,int,int,int,int);     //Find minimum score

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;    //Choice from menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for Gaddis 7thEd Chap6 Prob11 Avg Test Scores"<<endl;
        cout<<"2.  Type 2  for Gaddis 8thEd Chap5 Prob11 Population Growth"<<endl;
        cout<<"3.  Type 3  for Gaddis 8thEd Chap5 Prob4 Calories"<<endl;
        cout<<"4.  Type 4  for Gaddis 8thEd Chap5 Prob7 Salary Pay"<<endl;
        cout<<"5.  Type 5  for Gaddis 8thEd Chap5 Prob23 Pattern Displays"<<endl;
        cout<<"6.  Type 6  for Gaddis 8thEd Chap5 Prob2 ASCII Code"<<endl;
        cout<<"7.  Type 7  for Gaddis 8thEd Chap5 Prob22 Square Display"<<endl;
        cout<<"8.  Type 8  for Gaddis 8thEd Chap5 Prob16 Savings Account"<<endl;
        cout<<"9.  Type 9  for Gaddis 8thEd Chap5 Prob25 Savings Account(file)"<<endl;
        cout<<"10. Type 10 for Gaddis 8thEd Chap5 Prob12 Temperature"<<endl;
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:{
                cout<<"Average Test Scores"<<endl;
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

                break;
            }
            case 2:{
                cout<<"Population Growth"<<endl;
                        
                break;
            }
            case 3:{
                cout<<"Calories Burned"<<endl;
                
                break;
            }
            case 4:{
                cout<<"Salary Pay in Pennies"<<endl;
                
                break;
            }
            case 5:{
                cout<<"Pattern Displays"<<endl;
                
                break;
            }
            case 6:{
                cout<<"ASCII Code for 0-127"<<endl;
                
                break;
            }
            case 7:{
                cout<<"Square Display"<<endl;
                
                break;
            }
            case 8:{
                cout<<"Savings Account Balance"<<endl;
                
                break;
            }
            case 9:{
               
                break;
            }
            case 10:{
                cout<<"Temperature Conversions from 0-20 degrees Celsius"<<endl;

                break;
            }//End Case
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
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