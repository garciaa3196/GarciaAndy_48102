/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 13, 2016, 11:32 AM
 * Purpose: Create a Guessing Game  
 */

//System Libraries Here
#include <iostream>     //Input/Output Library
#include <cmath>        //log function
#include <cstdlib>
#include <ctime>
using namespace std;
//User Libraries Here

//Global Constants

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int> (time(0)));
    //Declare all Variables
    int range,nGuess;
    int number,answer;
    
    //Input values
    cout<<"THis is the guessing game"<<endl;
    cout<<"Choose a range for the number to guess"<<endl;
    cin>>range;
    
    //Process values -> Map inputs to Outputs
    nGuess=log(range)/log(2)+1;
    cout<<"You have "<<nGuess<<" guesses to find the random number"<<endl;
    number=rand()%(range+1);        //[0,range]
    
    //Display Output
    for(int guess=1;guess<=nGuess;guess++){
        cout<<"Input your guess"<<endl;
        cin>>answer;
        if(answer>number)cout<<"Guess too high"<<endl;
        else if(answer<number)cout<<"Guess too low"<<endl;
        else{
            cout<<"You guessed the number"<<endl;
            exit(0);
        }
    }
   
    //Exit
    return 0;
}

