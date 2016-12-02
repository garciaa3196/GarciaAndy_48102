/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on December 1, 2016, 12:17 PM
 * Purpose: Compare a number with values in an array
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
bool linSrch(int[],int&,int&);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int SIZE=10;
    int array[SIZE]={13579,26791,26792,33445,55555,62483,77777,79422,85647,93121};
    int num,result;
    
    //Input or initialize values Here
    cout<<"This program compares the winning lottery number to your lottry numbers"
            <<endl;
    cout<<"Enter the 5-digit winning lottery number"<<endl;
    cin>>num;
    
    //Confirm 5-digit number
    //Input Validation
    while(num<10000||num>99999){
        cout<<"Invalid Value - Must be 5 digits"<<endl;
        cout<<"Enter the 5-digit winning lottery number"<<endl;
        cin>>num;
    }
    //Search and compare numbers
    result=linSrch(array,num,SIZE);
    
    //Results
    if(result==true){
        cout<<"Congratulations, you win!!"<<endl;
    }
    else{
        cout<<"Sorry, you lose."<<endl;
    }

    //Exit
    return 0;
}
bool linSrch(int a[],int &num,int &SIZE){
    int i;
    for(int i=0;i<SIZE;i++){
        if(num==a[i]){
            return true;
        }
    }
}
