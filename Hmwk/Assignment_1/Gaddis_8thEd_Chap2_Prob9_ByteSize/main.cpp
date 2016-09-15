/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on September 8, 2016, 12:04 PM
 * Purpose: Investigate size of all primitive data types 
 */

//System Libraries
#include <iostream>  //Input/Output objects
using namespace std; //Namespace used in System Library
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins Here!
int main(int argc, char** argv) {
    //Display Output
    cout<<"The size of a boolean             = "<<sizeof(bool)<<" byte"<<endl;
    cout<<" [0 -> false, true otherwise]\n";
    cout<<"The size of a character           = "<<sizeof(char)<<" byte"<<endl;
    cout<<" [-2^7, 2^7-1],[-128,127]\n";
    cout<<"The size of an unsigned character = "<<sizeof(unsigned char)<<" byte"<<endl;
    cout<<" [0,2^8-1],[0,255]\n";
    cout<<"The size of a short               = "<<sizeof(short)<<" bytes"<<endl;
    cout<<" [-2^15,2^15-1],[-32768,32767]\n";
    cout<<"The size of an unsigned short     = "<<sizeof(unsigned short)<<" bytes"<<endl;
    cout<<" [0,2^16-1],[0,65535]\n";
    cout<<"The size of an integer            = "<<sizeof(int)<<" bytes"<<endl;
    cout<<" [-2^31,2^31-1],[+-2.15 billion]\n";
    cout<<"The size of an unsigned integer   = "<<sizeof(unsigned int)<<" bytes"<<endl;
    cout<<" [0,2^32-1],[4.3 billion]\n";
    cout<<"The size of a long                = "<<sizeof(long)<<" bytes"<<endl;
    cout<<" [-2^63,2^63-1],[+-9.2 quintillion]\n";
    cout<<"The size of an unsigned long      = "<<sizeof(unsigned long)<<" bytes"<<endl;
    cout<<" [0,2^64-1],[18.4 quintillion]\n";
    cout<<"The size of a float               = "<<sizeof(float)<<" bytes"<<endl;
    cout<<" [10^+-38], 7SD\n";
    cout<<"The size of a double              = "<<sizeof(double)<<" bytes"<<endl;
    cout<<" [10^+-308], 16SD\n";
    cout<<"The size of a long double         = "<<sizeof(long double)<<" bytes"<<endl;
    cout<<" [10^+-4932], 34SD\n";
    //Exit Program
    return 0;
}

