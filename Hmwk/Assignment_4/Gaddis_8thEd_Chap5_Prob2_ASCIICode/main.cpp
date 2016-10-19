/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 18, 2016, 8:35 PM
 * Purpose: Display the ASCII code for characters 0-127
 */

//System Libraries Here
#include <iostream>     //Input/Output Library
#include <iomanip>      //Formatting
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char  ascii;
    int count=0;      //Counter for characters per line
       
    //Loop
    for (char ascii=0;ascii<127;ascii++){
        cout<<ascii<<" ";
        count++;
        if(count==16){          //New line
            cout<<endl;
            count=0;
        }
        
    }
    cout<<endl;
        
    //Exit
    return 0;
}

