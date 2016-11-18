/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on November 17, 2016, 12:11 PM
 * Purpose: Determine the safest region
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
#include <cstring>      //Strings
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes
int getAcc(string &);
int LowAcc(int &,int &,int &,int &,int &);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n,s,w,e,c,Lowest;
    string regName;
    
    //Input Values
    cout<<"This program determines the safest of 5 regions for driving"<<endl;
    //North
    regName="North";
    n=getAcc(regName);

    //South
    regName="South";
    s=getAcc(regName);

    //West
    regName="West";
    w=getAcc(regName);
  
    //East
    regName="East";
    e=getAcc(regName);
    
    //Central
    regName="Central";
    c=getAcc(regName);
 
    //Find the lowest number of accidents
    Lowest=LowAcc(n,s,w,e,c);
    
    //Safest region
    if( LowAcc(n,s,w,e,c)==n){
        regName="North";
    }
    if( LowAcc(n,s,w,e,c)==s){
        regName="South";
    }
    if( LowAcc(n,s,w,e,c)==w){
        regName="West";
    }
    if( LowAcc(n,s,w,e,c)==e){
        regName="East";
    }
    if( LowAcc(n,s,w,e,c)==c){
        regName="Central";
    }
                    
    //Display Output
    cout<<"The safest region is "<<regName<<" with "<<
            Lowest<<" accidents "<<endl;
            
    
    //Exit
    return 0;   
}
int getAcc(string &regName){
    int num;
    cout<<"How many accidents occurred in the "<<regName<<" region"<<endl;
    cin>>num;
    return num;
}
int LowAcc(int &n,int &s,int &w,int &e,int &c){
    int min=n;
    if(min>s){
        min=s;
    }
    if(min>w){
        min=w;
    }
    if(min>e){
        min=e;
    }
    if(min>c){
        min=c;
    }
    return min;
}