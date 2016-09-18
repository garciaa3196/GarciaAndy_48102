/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on September 18, 2016, 3:51 PM
 * Purpose: Write the Big C using any character
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables
    char s=' '; //Space character
    char c;     //Character used to make CS!
 
//Input Values
    cout<<"What character would you like to make the big C, input\n";
    cin>>c;
//Calculations
    
//Display Output - The Big C
    cout<<s<<s<<c<<c<<c<<s<<s<<endl;
    cout<<s<<c<<s<<s<<c<<s<<s<<endl;
    cout<<c<<s<<s<<s<<s<<s<<s<<endl;
    cout<<c<<s<<s<<s<<s<<s<<s<<endl;
    cout<<c<<s<<s<<s<<s<<s<<s<<endl;
    cout<<c<<s<<s<<s<<s<<s<<s<<endl;
    cout<<c<<s<<s<<s<<s<<s<<s<<endl;
    cout<<s<<c<<s<<s<<c<<s<<s<<endl;
    cout<<s<<s<<c<<c<<c<<s<<s<<endl;
    
//Exit Program    
    return 0;
}

