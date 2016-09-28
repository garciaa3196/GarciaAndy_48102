/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on September 28, 2016, 3:48 PM
 * Purpose: Determine the amount of sales tax for county, state, and total
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
#include <iomanip>      //Formatting
using namespace std;

//User Libraries 

//Global Constants
const char PERCENT=100;      //Conversion to Percent
//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables with Initialization
    float total,                //Total sales+tax in dollars
          sales,                //Total sales pre-tax
          amtaxC,               //Amount of County Sales Tax
          amtaxS,               //Amount of State Sales Tax
          totalTax;             //Total sales tax
    unsigned char taxC=2,       //Percent of County Sales tax
            taxS=4,             //Percent of State sales tax
            c='-',
            month [10];                 
    unsigned int year;
    
    //Input values Here
    cout<<"What month is it currently?"<<endl;
    cin>>month;
    cout<<"What year is it?"<<endl;
    cin>>year;
    cout<<"What was the total amount of sales?"<<endl;
    cin>>total;
    
    //Process/Calculations Here
    sales=total/1.06;  //Find sales pre-tax
    amtaxC=sales*taxC/PERCENT;          //Find amount of county sales tax
    amtaxS=sales*taxS/PERCENT;          //Find amount of state sales tax
    totalTax=amtaxC+amtaxS;             //Find total tax
    
    //Output Located Here
    cout<<"Month: "<<month<<" "<<year<<endl;
    cout<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<endl;
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<"Total Sales = $"<<total<<endl;
    cout<<"Sales(pre-tax) = $"<<sales<<endl;
    cout<<"Percent county sales tax = "<<static_cast<int>(taxC)<<"%"<<endl;
    cout<<"Percent state sales tax = "<<static_cast<int>(taxS)<<"%"<<endl;
    cout<<"County sales tax = $"<<amtaxC<<endl;
    cout<<"State sales tax = $"<<amtaxS<<endl;
    cout<<"Total sales tax = $"<<totalTax<<endl;
    //Exit
    return 0;
}

