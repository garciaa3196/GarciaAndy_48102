/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on September 22, 2016, 12:07 PM
 * Purpose: Tell a story through the user's inputs
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
using namespace std;

//User Libraries 

//Global Constants

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables with Initialization
    char Name,
         City,  //Dream city
         Age,
         Hobby,
         Animal,
         AniName;   
    //Input values Here
    cout<<"What is your name?"<<endl;
    cin>>Name;
    cout<<"Age?"<<endl;
    cin>>Age;
    cout<<"What city do dream of living in?"<<endl;
    cin>>City;
    cout<<"What is your favorite hobby?"<<endl;
    cin>>Hobby;
    cout<<"What kind of animal do you have/want"<<endl;
    cin>>Animal;
    cout<<"What is the name of said animal?"<<endl;
    cin>>AniName;
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"In an alternate timeline, there was a famous person called "<<Name
            <<"who was the most well-known person on the planet. "
    
    //Exit
    return 0;
}

