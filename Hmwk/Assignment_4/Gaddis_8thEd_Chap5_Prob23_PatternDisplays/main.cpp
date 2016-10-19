/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 17, 2016, 9:39 PM
 * Purpose:  Display Pattern A and Pattern B
 */

//System Libraries Here
#include <iostream>     //Input/Output Library
#include <iomanip>      //Formatting
#include <cstdlib>       
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables
    char A='+';
    int rows=10,   //Number of rows  in pattern
        m=1,    
        p=1,
    count=0;
    
    //Table Setup
    cout<<"----------------------------------------------"<<endl;
    cout<<"Pattern A                          Pattern B"<<endl;
    cout<<"----------------------------------------------"<<endl;
    //Patterns Loop
    count++;
    for(int m=1;m<=rows;m++){
        for(int p=1;p<=m;p++){
            cout<<A;
        }
    }
    for(int m=rows;m>=1;m--){
        for(int p=1;p<=m;p++){
            cout<<A;
        }
        cout<<"\n";
    }
    
    
    //Exit
    return 0;
}

