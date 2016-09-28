/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on September 28, 2016, 2:50 PM
 * Purpose: Determine the total income generated from ticket sales
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
#include <iomanip>      //Formatting
using namespace std;

//User Libraries 

//Global Constants

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables with Initialization
    unsigned short seatA,       //Number of Class A tickets sold
            seatB,              //Number of Class B tickets sold
            seatC;              //Number of Class C tickets sold
    float   priceA=15,          //Price of Class A tickets in dollars
            priceB=12,          //Price of Class B tickets
            priceC=9,           //Price of Class C tickets
            total,              //Total income generated from all ticket sales
            classA,        //Income from Class A tickets
            classB,             //Income from Class B tickets
            classC;             //Income from Class C tickets
    
    //Input values Here
    cout<<"How many Class A tickets were sold?"<<endl;
    cin>>seatA;
    cout<<"How many Class B tickets were sold?"<<endl;
    cin>>seatB;
    cout<<"How many Class C tickets were sold?"<<endl;
    cin>>seatC;
    
    //Process/Calculations Here
    classA=priceA*seatA;        //Income from Class A tickets
    classB=priceB*seatB;        //Income from Class B tickets
    classC=priceC*seatC;        //Income from Class C tickets
    total=classA+classB+classC; //Total Income
    
    //Output Located Here
    cout<<"Number of Class A tickets sold = "<<seatA<<endl;
    cout<<"Number of Class B tickets sold = "<<seatB<<endl;
    cout<<"Number of Class C tickets sold = "<<seatC<<endl;
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<"Price of Class A tickets sold = $"<<priceA<<endl;
    cout<<"Price of Class B tickets sold = $"<<priceB<<endl;
    cout<<"Price of Class C tickets sold = $"<<priceC<<endl;
    cout<<"Income made from Class A tickets = $"<<classA<<endl;
    cout<<"Income made from Class B tickets = $"<<classB<<endl;
    cout<<"Income made from Class C tickets = $"<<classC<<endl;
    cout<<"Total income generated           = $"<<total<<endl;
    //Exit
    return 0;
}

