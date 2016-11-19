/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on November 18, 2016, 12:00 PM
 * Purpose: Determine the percentage correct on an exam
 */

//System Libraries
#include <iostream>     //Input/Output Objects
#include <fstream>      //File I/O
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void fillAry(char [],char [],int &);
void prntAry(char [],char [],int);
int  score(char [],char [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int const SIZE=100;
    char Key[SIZE],User[SIZE];
    int utilize;
    
    //Fill the array
    char fnKey[]="Key.dat";
    char fnUser[]="User.dat";
    fillAry(fnKey,Key,utilize);
    fillAry(fnUser,User,utilize);
    
    //Output Located Here
    prntAry(fnKey,Key,utilize);
    prntAry(fnUser,User,utilize);
    
    //Results
    cout<<"The percentage = "
        <<100.0f*score(Key,User,utilize)/utilize<<"%"<<endl;
    
        
    //Exit
    return 0;
}
void fillAry(char fn[],char a[],int &n){
    //Declare variables and open the file
    ifstream in;
    n=0;
    
    //Open the stream
    in.open(fn);
    
    //Read in data
    while(in>>a[n++]);
    n--;
    
    //Close the file
    in.close();
}
void prntAry(char fn[],char a[],int n){
    //Output Located Here
    int count=0;
    cout<<"The Array is from file -> "<<fn<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if((count++)%10==9)cout<<endl;
    }
    cout<<endl;
}
int  score(char Key[],char User[],int n){
    //Declare Variables
    int Correct=0;
    //Score the test
    for(int i=0;i<n;i++){
        if(Key[i]==User[i]){
            Correct++;
        }    
    }
    //Return the number correct
    return Correct;
}
