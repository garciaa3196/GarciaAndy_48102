/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 23, 2016, 12:37 AM
 * Purpose: Play Connect Four
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes
void BoardDisplay(char (&slot)[6][7]);
bool check();
int drop(int y, char play);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char turn='B';
    char slot[6][7];
    int x,y,MaxChar=42,row,col=0;
    
    //Display Board
    for(int x=0;x<=7;x++){
        for(int y=0;y<=7;y++){
            slot[x][y]=' ';
        }
    }
    //Call function for displaying board
    BoardDisplay(slot);
    
    //Exit
    return 0;
}

void BoardDipslay(char(&slot)[6][7]){
    cout<<" 1  2  3  4  5  6  7 "<<endl;
    for(int x=0;x<=5;x++){
        for(int y=0;y<=6;y++){
            cout<<char(218)<<char(196)<<char(191)<<" ";
            cout<<'\n';
        }    
        for(int y=0;y<=6;y++){ 
            cout<<char(179)<<slot[x][y]<<char(179)<<" ";
            cout<<'\n';
        }    
        for(int y=0;y<=6;y++){ 
            cout<<char(192)<<char(196)<<char(217)<<" ";
            cout<<'\n';
        }    
    }
}
int drop(int &y,char play){
    
}
