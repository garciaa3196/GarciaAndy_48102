/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on December 6, 2016, 11:09 AM
 * Purpose:  Play Economy
 */

//System Libraries
#include <iostream> //I/O
#include <cstdlib>  //Random
#include <ctime>    //Time
#include <string>  //Strings
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void fillAry(string [],int);
void rules();
void shuffle(int [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=52;
    string deck[SIZE]={"1C","2C","3C","4C","5C","6C","7C","8C","9C","10C","11C",
                       "12C","13C","1S","2S","3S","4S","5S","6S","7S","8S","9S",
                       "10S","11S","12S","13S","1D","2D","3D","4D","5D","6D",
                       "7D","8D","9D","10D","11D","12D","13D","1H","2H","3H",
                       "4H","5H","6H","7H","8H","9H","10H","11H","12H","13H"};
    int play[utilize],menu,utilize;
    
    
    //Start Menu
    cout<<"Welcome to Economy"<<endl;
    cout<<"1. Start"<<endl;
    cout<<"2. Rules"<<endl;
    cout<<"3. Exit"<<endl;
    cin>>menu;
    
    //Selection
    if(menu==1){
        fillAry(play,utilize);
        
    }
    else if(menu==2){
        rules();
    }
    else{
        return 0;
    }
    
    //Input or initialize values
    
    //Process/Calculations
    
    //Display Output
    

    //Exit
    return 0;
}
void fillAry(string a[],int &utilize){
    cout<<"How many players are playing? (up to 8)"<<endl;
    cin>>utilize;
    cout<<"What is the name of each player?"<<endl;
    for(int i=0;i<utilize;i++){
        cin<<a[i];
    }
}
void rules(){
    cout<<"This card game is played with each player having a role. Player 1 is"
            " the King and Player 8 is the peasant. All other players are "
            "citizens. The deck is shuffled and all cards are dealt out "
            " to the players. \n"
            "To start, the King plays a card start a stack."
            " This stack can be added to by other players. \n"
            "Cards can only be added to the stack if they are higher in number "
            "to the last card in the stack. \n"
            "If the cards can't be dealt out equally to each player, "
            "the peasant will be given remaining card. \n"
            "Players MAY play a double,triple,or quadruple if they have multiple"
            " of the same card. \n"
            "Before beginning, the peasant must give the king their highest card "
            "while the king gives the peasant their lowest card. \n"
            "The goal of the game is to be the first to have no more cards. \n"
}