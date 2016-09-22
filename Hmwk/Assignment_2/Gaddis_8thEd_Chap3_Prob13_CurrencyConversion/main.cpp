/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on September 22, 2016, 11:36 AM
 * Purpose: Convert U.S. dollars to various currencies
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
#include <iomanip>      //Formatting
using namespace std;

//User Libraries 

//Global Constants
float CNVEu=.89660,     //Amount of Euros per US dollar (from Google)
      CNVYe=101.37,     //Amount of Yen per US dollar (from Google)
      CNVBP=.76995,    //Amount of British Pounds per US dollar (from Google)
      CNVZD=373,        //Amount of Zimbabwe Dollars per US dollar (from Google)
      CNVPe=19.7855;   //Amount of Pesos per US dollar (from Google)  
//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables with Initialization
    float Dollars,  //US Dollars
          Euros,    //Euros
          Yen,      //Japanese Yen
          Pounds,   //British Pound
          ZDollar,  //Zimbabwe Dollars
          Pesos;    //Mexican Pesos
    //Input values Here
    cout<<"How many US dollars do you have"<<endl;
    cin>>Dollars;
    
    //Process/Calculations Here
    Euros=Dollars*CNVEu;
    Yen=Dollars*CNVYe;
    Pounds=Dollars*CNVBP;
    ZDollar=Dollars*CNVZD;
    Pesos=Dollars*CNVPe;        
            
    //Output Located Here
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<"Amount of U.S. Dollars = $"<<Dollars<<endl;
    cout<<"Amount of Euros = €"<<Euros<<endl;
    cout<<"Amount of Yen = ¥"<<Yen<<endl;
    cout<<"Amount of British Pounds = £"<<Pounds<<endl;
    cout<<"Amount of Zimbabwe Dollars = $"<<ZDollar<<endl;
    cout<<"Amount of Pesos = $"<<Pesos<<endl;

    //Exit
    return 0;
}

