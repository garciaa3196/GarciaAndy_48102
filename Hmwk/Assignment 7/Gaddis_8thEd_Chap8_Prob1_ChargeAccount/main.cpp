/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on December 1, 2016, 12:17 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void linSrch(int[],int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int const SIZE=18;
    int array[SIZE]={5658845,4520125,7895122,8777541,8451277,1302850,
                8080152,4562555,5552012,5050552,7825877,1250255,
                1005231,6545231,3852085,7576651,7881200,4581002};
    int num;
    
    //Input or initialize values Here
    cout<<"This program compares your charge account number to a list of numbers"
            <<endl;
    cout<<"Enter your 7-digit charge account number"<<endl;
    cin>>num;
    
    //Search and compare numbers
    linSrch(array,num,SIZE);
    

    //Exit
    return 0;
}
void linSrch(int &array,int &num,int &SIZE){
    int i;
    for(int i=0;i<SIZE;i++){
        if(num==array[i]){
            cout<<"Your number is valid"<<endl;
        }
        else{
            cout<<"Your number is invalid"<<endl;
        }
    }
}
