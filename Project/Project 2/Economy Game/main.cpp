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
void fillAry(string [],int&,int);
void fillDec(int[],int);
void rules();
void showRole(string[],int);
void shuffle(int [],int);
void deal(int[],int[],int[],int[],int[],int[],int);
void prntDk(int[],int);
void prntNme(string [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=52,HSIZE=10;
    int deck[SIZE],hand[SIZE];
    string pName[SIZE];
    int menu,utilize=5,play1[HSIZE],play2[HSIZE],play3[HSIZE],play4[HSIZE+1],
            play5[HSIZE+1],turn;  
    
    //Start Menu
    cout<<"Welcome to Economy"<<endl;
    cout<<"1. Start"<<endl;
    cout<<"2. Rules"<<endl;
    cout<<"3. Exit"<<endl;
    cin>>menu;
    
    //Selection
    if(menu==1){
        fillAry(pName,utilize,SIZE);
        fillDec(deck,SIZE);
        showRole(pName,utilize);
        shuffle(deck,SIZE);
        deal(deck,play1,play2,play3,play4,play5,SIZE);
        
    }
    else if(menu==2){
        rules();
    }
    else{
        return 0;
    }
        

    //Exit
    return 0;
}
void fillAry(string a[],int &utilize,int size){
    cout<<"What is the name of each player?"<<endl;
    for(int i=0;i<utilize;i++){
        cin>>a[i];
    }
}
void fillDec(int a[],int size){
    for(int i=0;i<size;i++){
        a[i]=i;
    }
}
void rules(){
    cout<<"This card game is played with each player having a role. Player 1 is"
            " the King and Player 8 is the peasant. All other players are "
            "citizens. The deck is shuffled and all cards are dealt out "
            "to the players. \n"
            "- To start, the King plays a card start a stack. "
            "This stack can be added to by other players. \n"
            "- If the cards can't be dealt out equally to each player, "
            "the players at the bottom will be given the remaining cards. \n"
            "- Cards can only be added to the stack if they are higher in number "
            "to the last card in the stack. \n"
            "- Go around to each player and ask if they wish to add to the stack. \n"
            "- If nobody wants to add to the stack, the stack is wiped out and the last "
            "player to add to the old stack begins a new stack. \n"
            "- Aces wipe out a stack immediately and said player begins a new stack. \n"
            "- Players MAY start a stack with a double,triple,or quadruple "
            "if they have multiple of the same card. \n"
            "- If the stack starts with a double,triple, or quadruple, you can"
            " ONLY add to the stack if you play doubles,triples, or quadruples. "
            "This includes Aces. \n"
            "- Before beginning, the peasant must give the king their highest card "
            "while the king gives the peasant their lowest card. \n"
            "The goal of the game is to be the first to have no more cards. \n"
            "The game ends when everyone but one player has no more cards. \n"
            "The order in which run out of cards determines who the "
            "king and peasant are next time."<<endl;
}
void prntNme(string a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
void showRole(string a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]==a[0]){
            cout<<"King: "<<a[i]<<endl;
        }
        else if(a[i]==a[4]){
            cout<<"Peasant: "<<a[i]<<endl;
        }
    }
}
void shuffle(int a[],int size){
    int temp, r;
    for(int i=size-1;i>=0;i--){
        r=i+(rand()%(52-i));
        temp=a[i];
        a[i]=a[r];
        a[r]=temp;
    }
}
void prntDk(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
        if(i%10==9){
            cout<<endl;
        }
    }
}
void deal(int deck[],int a[],int b[],int c[],int d[],int e[],int size){
    int cards=52;
    while(cards>0){
        //Deal card one at a time to each player
        cards--;
    }
}
void swapCrd(int a[],int e[],int hsize){
    
}
