/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 6, 2016, 12:27 PM
 * Purpose:  Play Rock Paper Scissors
 */

//System Libraries Here
#include <iostream> //Input/Output Library
#include <cstdlib>  //Random Number Generator
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    char    computr,        //Computers Choice
            player;         //Player Choice
    
    //Input or initialize values Here
    computr=rand()%4+80;
    while(computr=='Q'){
        computr=rand()%4+80;
    }
    
    //Input Player Choice
    cout<<"Input your choice R=Rock, P=Paper, S=Scissors"<<endl;
    cin>>player;
    switch(player){
        case 'r':
        case 'R': player='R';break;
        case 's':
        case 'S': player='S';break;
        case 'p':
        case 'P': player='P';break;
        default: player='P';break;
    }
    
    //Display Output 
    cout<<"The computer chooses "<<computr<<endl;
    cout<<"Player chooses       "<<player<<endl;
    
    //Determine the winner and display
    if(computr==player){
        cout<<"You tie"<<endl;
    }else if(computr=='P'){
        if(player=='S')cout<<"You win"<<endl;
        else cout<<"You lose"<<endl;
    }else if(computr=='S'){
        if(player=='R')cout<<"You win"<<endl;
        else cout<<"You lose"<<endl;
    }else if(computr=='R'){
        if(player=='P')cout<<"You win"<<endl;
        else cout<<"You lose"<<endl;
    }
    
    //Exit
    return 0;
}

