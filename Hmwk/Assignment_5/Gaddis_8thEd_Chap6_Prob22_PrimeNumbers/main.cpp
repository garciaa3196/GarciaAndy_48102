/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on November 17, 2016, 6:57 PM
 * Purpose: Determine whether a number is prime
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes
bool isPrime(int &);    //Tests for prime numbers

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num;
    
    //Input values
    cout<<"This program tests for prime numbers"<<endl;
    do{
        cout<<"Enter a value"<<endl;
        cin>>num;
    
    //Display Output
        if(isPrime(num)==true){
            cout<<num<<" is a prime number"<<endl;
        }
        else{
            cout<<num<<" is not a prime number"<<endl;
        }
    }while(num>=1);
    
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