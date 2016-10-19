/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 18, 2016, 5:54 PM
 * Purpose: Create square with a number of rows given by the user
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
    int  number,    //Size of square
         r,         //Rows
         c;         //Columns
                    
    //Input Values - Starting Balance,Interest rate, Time passed
    cout<<"Input a positive integer no greater than 15"<<endl;
    cin>>number;
    if(number<1){
        number=1;
    }
    else if(number>15){
        number=15;
    }
    //Loop
    for(int r=1;r<=number;r++){
        for(int c=1;c<=number;c++){
            cout<<"X";
        }
        cout<<"\n";
    }
        
    //Exit
    return 0;
}

