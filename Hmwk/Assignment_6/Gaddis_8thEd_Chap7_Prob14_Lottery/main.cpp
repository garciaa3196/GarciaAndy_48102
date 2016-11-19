/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on November 18, 2016, 1:24 PM
 * Purpose: Simulate a lottery
 */

//System Libraries
#include <iostream>     //Input/Output Objects
#include <cstdlib>      //Random
#include <ctime>        //Time
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void fillAry(int[],int &);
void numUser(int[],int &);
bool Winner(int &);
int matches(int[],int[],int &);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int SIZE=5;
    int lottery[SIZE],user[SIZE];
    int match;

    //Pick lottery numbers
    numUser(user,SIZE);
    
    //Generate the lottery numbers
    fillAry(lottery,SIZE);
    
    //Matches
    match=matches(lottery,user,SIZE);
    
    //Results
    cout<<"You have "<<match<<" matches"<<endl; //Number of matches
    if(Winner(match)==true){
        cout<<"Congratulations you win!!"<<endl;
    }
    else{
        cout<<"Sorry, better luck next time"<<endl;
    }
 
    //Exit
    return 0;
}
void fillAry(int lottery[],int &SIZE){
    //Fill the array
    cout<<"The winning lottery numbers are ";
    for(int i=0;i<SIZE;i++){
        lottery[i]=rand()%10;
        cout<<lottery[i]<<" ";
    }
    cout<<endl;
}
void numUser(int user[],int &SIZE){
    int i=0;
    //Fill the array
    cout<<"What are your 5 lotto numbers (0-9)"<<endl;
    while(i<SIZE){
        cin>>user[i];
        i++;
    }
}
bool Winner(int &match){
    if (match==5){
        return true;
    }
    else{
        return false;
    }
}
int matches(int lottery[],int user[],int &SIZE){
    int matches=0;
    for(int i=0;i<SIZE;i++){
        if(lottery[i]==user[i]){
           matches++;
        }
    }
    return matches;
}