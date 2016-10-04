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
    cout<<"Input a number between 1 and 10:"<<endl;
    cin>>number;
    
    //Input Validation
    if(number>10){
        cout<<"Error"<<endl;
        return 1;
    }
    
    //Process Values - Map Inputs to Outputs
    switch(number){
        case 1: cout<<"Roman Numeral: I"<<endl;break;
        case 2: cout<<"Roman Numeral: II"<<endl;break;
        case 3: cout<<"Roman Numeral: III"<<endl;break;
        case 4: cout<<"Roman Numeral: IV"<<endl;break;
        case 5: cout<<"Roman Numeral: V"<<endl;break;
        case 6: cout<<"Roman Numeral: VI"<<endl;break;
        case 7: cout<<"Roman Numeral: VII"<<endl;break;
    }
    
   
    //Display Output
    
    //Exit
    return 0;
}

