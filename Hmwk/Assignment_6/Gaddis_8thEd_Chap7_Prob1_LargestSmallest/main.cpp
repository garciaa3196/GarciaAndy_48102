/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on November 18, 2016, 2:39 PM
 * Purpose: Determine the largest and smallest numbers in an array
 */

//System Libraries
#include <iostream>     //Input/Output Objects
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int compAry(int [],int &,int &);  //Compare numbers in the arrays

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int SIZE=10,n;
    int num[SIZE];

    //Array
    compAry(num,SIZE,n);
    
        
    //Exit
    return 0;
}
int compAry(int num[],int &SIZE,int &n){
    int min=num[0];
    int max=num[0];
    //Fill the array
    cout<<"Enter 10 values for the array"<<endl;
    for(int i=0;i<SIZE;i++){
        cin>>n;
        num[i]=n;
        if(min>num[i]){
            min=num[i];
        }
        if(max<num[i]){
            max=num[i];
        }
    }
    cout<<"The max value is "<<max<<endl;
    cout<<"The min value is "<<min<<endl;
    
}
