/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 4, 2016, 10:49 AM
 * Purpose: Display the Roman Numeral equivalent for any number between 1 and 10
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants


//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short number;  
    
    //Input or initialize values Here
    cout<<"This program shows the roman numeral equivalent of a number"<<endl;
    cout<<"Input a number between 1 and 10:"<<endl;
    cin>>number;
    
    //Input Validation
    if(number>10){
        cout<<"Error"<<endl;
        return 1;
    }
    
    //Process Values - Map input to output
    switch(number){
        case 1: cout<<number<<" = I"<<endl;break;
        case 2: cout<<number<<" = II"<<endl;break;
        case 3: cout<<number<<" = III"<<endl;break;
        case 4: cout<<number<<" = IV"<<endl;break;
        case 5: cout<<number<<" = V"<<endl;break;
        case 6: cout<<number<<" = VI"<<endl;break;
        case 7: cout<<number<<" = VII"<<endl;break;
        case 8: cout<<number<<" = VIII"<<endl;break; 
        case 9: cout<<number<<" = IX"<<endl;break;
        case 10: cout<<number<<" = X"<<endl;break;
            
            
    }
    
    //Exit
    return 0;
}

