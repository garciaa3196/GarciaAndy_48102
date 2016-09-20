/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on September 19, 2016, 8:17 PM
 * Purpose: To calculate the total price of 5 items with sales tax included
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables with initialization
    float 
        item1=15.95,    //Price of Item 1 in dollars
        item2=24.95,    //Price of Item 2
        item3=6.95,     //Price of Item 3
        item4=12.95,    //Price of Item 4
        item5=3.95,     //Price of Item 5
        sTax=.07f,      //Amount of Sales Tax
        STax,           //Sales Tax as a percent
        subT,           //Subtotal of the purchase
        Total;          //Total of the purchase after tax
   
    //Process/Calculations Here
    subT=item1+item2+item3+item4+item5;     //Subtotal of purchase
    Total=(subT*sTax)+subT;     //Total Price
    STax=sTax*100;              //Percent of Sales Tax        
    //Display Output
    cout<<"Price of item 1 = $"<<item1<<endl;
    cout<<"Price of item 2 = $"<<item2<<endl;
    cout<<"Price of item 3 = $"<<item3<<endl;
    cout<<"Price of item 4 = $"<<item4<<endl;
    cout<<"Price of item 5 = $"<<item5<<endl;
    cout<<"Subtotal of purchase = $"<<subT<<endl;
    cout<<"Amount of Sales Tax = "<<STax<<"%"<<endl;
    cout<<std::setprecision(4)<<endl;
    cout<<"Total Price of purchase = $"<<Total<<endl; 

    //Exit
    return 0;
}

