/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 24, 2016, 12:37 AM
 * Purpose: Playing Checkers
 */

#include <iostream>     //Input/Output Library
#include <iomanip>      //Formatting
#include <fstream>      //File I/O
#include <string>       //Strings
using namespace std;    //Namespace used in System Library

//User Libraries

//Global Constants

//Function Prototypes
void input();
void move();
void posLeap();     //Possible Leap
void gameover();
void king();
bool game=true;
bool movcheck();
bool leap;

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int rows,cols;  
    ifstream in;    //Board File
    ofstream out;   //Player File
    string line;
    char Turn='B';
    
    
    while(game){
        //Display Board
        in.open("Board.dat");
        in>>rows>>cols;
        cout<<"Rows = "<<rows<<" Columns = "<<cols<<endl;

        //Display Output / what is in the file to the output screen
        //In addition add in row numbers and column numbers for the user
        getline(in,line);
        for(int row=1;row<=rows;row++){
            getline(in,line);
            cout<<row<<" "<<line<<endl;
        }
        cout<<"  ";
        for(int col=1;col<=cols;col++){
            cout<<col;
        }
        cout<<endl;
        
        //Designate Turn
        if(Turn=='B'){              
            cout<<"Player 1's Turn"<<endl;    
        }else if(Turn=='R'){
            cout<<"Player 2's Turn"<<endl;
        }
        
        //Call Functions
        input();
        move();
        king();
        gameover();
    }
    if(Turn=='B'){
        cout<<"(Red) Player 2 Wins!"<<endl;
    }else if(Turn=='R'){
        cout<<"(Black) Player 1 Wins!"<<endl;
    }
    cout<<"Game Over"<<endl;
    
    //Close the File
    in.close();    
    
    //Exit 
    return 0;
}

void input(){             //Player takes their turn
    //Choosing a piece to move
    int rowp,colp;
    cout<<"Select a piece \n";
    cout<<"Row = ";
    cin>>rowp;
    cout<<"Column = ";
    cin>>colp;
    
    //Input Validation
    if(rowp<1||rowp>8||colp<1||colp>8){
        cout<<"Invalid Value - Enter a value between 1 and 8"<<endl;
        cout<<"Select a piece \n";
        cout<<"Row = ";
        cin>>rowp;
        cout<<"Column = ";
        cin>>colp;
    }
    //Move Piece to another location
    int rowm,colm;
    cout<<"Select a place to move your piece"<<endl;
    cout<<"Row = ";
    cin>>rowm;
    cout<<"Column = ";
    cin>>colm;
    //Input Validation
    while(rowm<1||rowm>8||colp<1||colp>8){
        cout<<"Invalid Value - Enter a value between 1 and 8"<<endl;
        cout<<"Select a place to move your piece \n";
        cout<<"Row = ";
        cin>>rowm;
        cout<<"Column = ";
        cin>>colm;
    }
    while(movcheck()==false){
        cout<<"Illegal Move!! "<<endl;
        input();
    }
}
bool movcheck(){
    
}
void move(){
    
}
void posLeap(){
    
}
void king(){
    
}
void gameover(){
    
}
