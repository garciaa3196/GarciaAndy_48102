/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on November 17, 2016, 6:57 PM
 * Purpose: Find the proper amount of dollars and coins for change 
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes
void dollars(int,int &,int &,int &,int&,int &);
void cents(int,int &,int &,int &,int &);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n50s,n20s,n10s,n5s,n1s;     //Dollar quantities
    int quarter,dime,nickel,penny;  //Coin quantities
    float price,tender;             //Price and Tendered amounts             
    int pDol,pCent,tDol,tCent;      //Price and Tendered dollars and cents
    
    //Input values
    do{
        cout<<"This program calculates exact change"<<endl;
        cout<<"What is the price of the purchase = $"<<endl;
        cin>>price;
        cout<<"What is the tendered amount = $ > Price"<<endl;
        cin>>tender;
    }while(tender-price<0);
    
    //First step calculate dollars and cents
    pDol=price+0.005f;           //Partial penny
    pCent=(price-pDol)*100+0.005;//Number of cents with partial penny   
    tDol=tender+0.005f;           //Partial penny
    tCent=(tender-tDol)*100+0.005;//Number of cents with partial penny
    
    //Display the amounts
    cout<<"The price input     = $"<<pDol<<"."<<pCent<<endl;
    cout<<"The tendered amount = $"<<tDol<<"."<<tCent<<endl;
    if(tCent-pCent<0){
        tDol--;
        tCent+=100;
    }
    cout<<"The change amount   = $"<<tDol-pDol<<"."<<tCent-pCent<<endl;
    
    //Calculate the Change
    dollars(tDol-pDol,n50s,n20s,n10s,n5s,n1s);
    cout<<n50s<<" number of 50's"<<endl;
    cout<<n20s<<" number of 20's"<<endl;
    cout<<n10s<<" number of 10's"<<endl;
    cout<<n5s<<" number of 5's"<<endl;
    cout<<n1s<<" number of 1's"<<endl;
    
    //Calculate the Change
    cents(tCent-pCent,quarter,dime,nickel,penny);
    cout<<quarter<<" number of quarter's"<<endl;
    cout<<dime<<" number of dime's"<<endl;
    cout<<nickel<<" number of nickel's"<<endl;
    cout<<penny<<" number of penny's"<<endl;
    
    //Exit
    return 0;
}
void cents(int d,int &n25s,int &n10s,int &n5s,int &n1s){
    //Calculate the change
    n25s=d/25;  //How many 25's
    d-=25*n25s;
    n10s=d/10;  //How many 10's
    d-=10*n10s;
    n5s=d/5;    //How many 5's
    d-=5*n5s;
    n1s=d;
}
void dollars(int d,int &n50s,int &n20s,int &n10s,int &n5s,int &n1s){
    //Calculate the change
    n50s=d/50;  //How many 50's
    d-=50*n50s;
    n20s=d/20;  //How many 20's
    d-=20*n20s;
    n10s=d/10;  //How many 10's
    d-=10*n10s;
    n5s=d/5;    //How many 5's
    d-=5*n5s;
    n1s=d;
}
