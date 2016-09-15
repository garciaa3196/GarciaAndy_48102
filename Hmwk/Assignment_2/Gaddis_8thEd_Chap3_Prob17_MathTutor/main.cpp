/* 
  File:   main.cpp
  Author: Andy Garcia
  Created on September 15, 2016, 11:27 AM
  Purpose:  Create a math tutor to emphasize the random number generator
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
#include <cstdlib>      //Random number seed
#include <ctime>        //Seed the random number generator
using namespace std;

//User Libraries

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables
    unsigned short op1,op2,result,answer;
    
    //Input or initialize values
    op1=rand()%900+100;     //3 digit random number
    op2=rand()%900+100;     //3 digit random number
    
    //Process/Calculations 
    result=op1+op2;
    //Output Located Here
    cout<<"Solve the following addition problem"<<endl;
    cout<<"   "<<op1<<endl;
    cout<<" + "<<op2<<endl;
    cout<<"------"<<endl;
    
    //Ask user for the answer
    //cout<<endl<<"What is the answer"<<endl;
    cin>>answer;
    cout<<endl;
    
    //Determine if correct or not
    cout<<"The answer is "<<(result==answer?"Correct":"Incorrect")<<endl;
    cout<<"The answer was = "<<result<<endl;

    //Exit
    return 0;
}

