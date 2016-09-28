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
    char Name    [10];      //Name
    char City    [10];      //Current City
    char Age     [10];       //Age in years
    char Hobby   [10];     //Favorite Hobby
    char Animal  [10];    //Current/Dream Pet
    char AniName [10];   //Pet Name
    
    //Input values Here
    cout<<"What is your name?"<<endl;
    cin>>Name;
    cout<<"Age?"<<endl;
    cin>>Age;
    cout<<"What city do you live in?"<<endl;
    cin>>City;
    cout<<"What is your favorite hobby?"<<endl;
    cin>>Hobby;
    cout<<"What kind of animal do you currently own or want?"<<endl;
    cin>>Animal;
    cout<<"What is the name of said animal?"<<endl;
    cin>>AniName;
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"In an alternate timeline, there was a famous person called "<<Name
            <<" who was the most well-known person in the country. "
            "This person was especially known for "<<Hobby<<" at the age of "
            <<Age<<". "<<Name<<" currently resides in "<<City<<" with his pet "
            <<Animal<<" named "<<AniName<<". "<<Name
            <<" was also considered a pretty big deal by many people because "
            "of his back to back wins with "<<AniName<<" in the National "
            <<Animal<<" Triathlon. They triumphed over all who came along. "
            <<Name<<" and "<<AniName<<
            " would continue to achieve success for many years to come."<<endl;
    
    //Exit
    return 0;
}

