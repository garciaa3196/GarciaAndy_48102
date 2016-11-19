/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on November 18, 2016, 1:48 PM
 * Purpose: Compare a number n to integers in an array
 */

//System Libraries
#include <iostream>     //Input/Output Objects
#include <cstdlib>      //Random
#include <ctime>        //Time
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int fillAry(int[],int &,int &);


//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int SIZE,n;
    int num[SIZE];

    //Fill Ary,input and compare
    fillAry(num,SIZE,n);
    
        
    //Exit
    return 0;
}
int fillAry(int num[],int &SIZE,int &n){
    //Size the array
    cout<<"Enter a size for the array"<<endl;
    cin>>SIZE;
    //Input value for n
    cout<<"Enter a value for n from 1-50"<<endl;
    cin>>n;
    if(SIZE>25||SIZE<1||n>50||n<1){
        cout<<"Bad Value"<<endl;
        //Size the array
        cout<<"Enter a size for the array"<<endl;
        cin>>SIZE;
        //Input value for n
        cout<<"Enter a value for n from 1-50"<<endl;
        cin>>n;
    }
    
    //Fill the array
    cout<<"Numbers bigger than n in the array"<<endl;
    for(int i=0;i<SIZE;i++){
        num[i]=rand()%50+1;   //Random numbers from 1-50
        //Compare Numbers to n
        if(n<num[i]){
            cout<<num[i]<<endl;
        }
    }
    
    
}
