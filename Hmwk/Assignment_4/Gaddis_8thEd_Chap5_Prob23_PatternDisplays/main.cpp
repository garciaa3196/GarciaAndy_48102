/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 17, 2016, 9:39 PM
 * Purpose:  Display Pattern A and Pattern B
 */

//System Libraries Here
#include <iostream>     //Input/Output Library
#include <iomanip>      //Formatting
#include <cmath>       //exp function 
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables
    char A='+';
    int rows,   //Number of rows  in pattern
        m=1,    
        p=1;    
    
    //Input Value
    cout<<"Input the number of rows"<<endl;
    cin>>rows;
    
    //Table Setup
    cout<<"----------------------"<<endl;
    cout<<"Pattern A"<<endl;
    cout<<"----------------------"<<endl;
    //Pattern A
    for(int m=1;m<=rows;m++){
        for(int p=1;p<=m;p++){
            cout<<A;
        }
        cout<<"\n";
    }
    cout<<endl;
    //Pattern B
    cout<<"----------------------"<<endl;
    cout<<"Pattern B"<<endl;
    cout<<"----------------------"<<endl;
    for(int m=rows;m>=1;m--){
        for(int p=1;p<=m;p++){
            cout<<A;
        }
        cout<<"\n";
    }
    
    
    
    //Exit
    return 0;
}

