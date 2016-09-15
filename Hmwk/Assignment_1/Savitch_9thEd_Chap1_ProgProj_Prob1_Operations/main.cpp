/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on September 13, 2016, 10:46 AM
 * Purpose: Compute all five operators for any two integers
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int op1,op2;
    //Input or initialize values Here
    cout<<"Input 2 integer values to Add,Sub,Mult,Div,Mod"<<endl;
    cin>>op1>>op2;
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<op1+op2<<"="<<op1<<"+"<<op2<<endl;
    cout<<op1-op2<<"="<<op1<<"-"<<op2<<endl;
    cout<<op1*op2<<"="<<op1<<"*"<<op2<<endl;
    cout<<op1/op2<<"="<<op1<<"/"<<op2<<endl;
    cout<<op1%op2<<"="<<op1<<"%"<<op2<<endl;
    //Exit
    return 0;
}

