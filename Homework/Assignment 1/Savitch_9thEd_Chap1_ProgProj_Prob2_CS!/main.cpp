/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on September 13, 2016, 11:09 AM
 * Purpose: Write CS! using any characters
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
    char a='-'; //Character used to make two lines
//Input Values
    cout<<"What character would you like to make the CS!, input\n";
    cin>>c;
//Calculations
    
//Display Output - CS!
    cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<endl;
    cout<<s<<s<<c<<c<<c<<s<<s<<s<<s<<c<<c<<s<<c<<c<<endl;
    cout<<s<<c<<s<<s<<s<<c<<s<<s<<c<<s<<s<<s<<c<<c<<endl;
    cout<<c<<s<<s<<s<<s<<s<<s<<s<<c<<s<<s<<s<<c<<c<<endl;
    cout<<c<<s<<s<<s<<s<<s<<s<<s<<c<<s<<s<<s<<c<<c<<endl;
    cout<<c<<s<<s<<s<<s<<s<<s<<s<<s<<c<<s<<s<<c<<c<<endl;
    cout<<c<<s<<s<<s<<s<<s<<s<<s<<s<<s<<c<<s<<c<<c<<endl;
    cout<<s<<c<<s<<s<<s<<c<<s<<s<<s<<s<<c<<s<<s<<s<<endl;
    cout<<s<<s<<c<<c<<c<<s<<s<<s<<c<<c<<c<<s<<c<<c<<endl;
    cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<endl;
//Exit Program    
    return 0;
}

