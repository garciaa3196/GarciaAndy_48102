/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on November 17, 2016, 9:36 PM
 * Purpose: Put the prime numbers 1-100 in a list  
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
#include <fstream>      //File I/O
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes
bool isPrime(int &);    //Tests for prime numbers

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num;
    ofstream in;
    
    //Open the file
    in.open("List.dat");
    
    //Process Values - Map Inputs to Outputs
    for(int num=1;num<=100;num++){
        if(isPrime(num)==true){
            cout<<num<<endl;
            in<<num<<" ";
        }
    }
    //Close the File
    in.close();
    
    //Exit
    return 0;
}
bool isPrime(int &num){
    if (num<1){
        return false;
    }
    else if(num<=3){
        return true;
    }
    else if(num%2==0||num%3==0||num%5==0){
        return false;
    }
    
}