/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 23, 2016, 12:37 AM
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
void Leap();        //Handles Leaps
void gameover();    //Ends Game
void king();        //Determines whether a piece is a King
bool game=true;          
bool movcheck();    //Checks for valid move
bool leap;

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int rows,cols,row1,col1,row2,col2;  
    ifstream in;    //Board File
    string line;
    char Turn='B';      //Player turn
    int x,y;
    char board[8][8];
    
    while(game){
        //Display Board
        
        
        //Designate Turn
        if(Turn=='B'){              
            cout<<"Player 1's Turn"<<endl;    
        }else if(Turn=='W'){
            cout<<"Player 2's Turn"<<endl;
        }
        
        //Call Functions
        input();
        move();
        king();
        gameover();
    }
    if(Turn=='B'){
        cout<<"(White) Player 2 Wins!"<<endl;
    }else if(Turn=='W'){
        cout<<"(Black) Player 1 Wins!"<<endl;
    }
    cout<<"Game Over"<<endl;
    
    //Close file
    in.close();
    
    //Exit 
    return 0;
}
 
void input(int &row1,int &col1,int &row2,int &col2){  //Player takes their turn
    //Choosing a piece to move
    cout<<"Select a piece \n";
    cout<<"Row = ";
    cin>>row1;
    cout<<"Column = ";
    cin>>col1;
    
    //Input Validation
    if(row1<1||row1>8||col1<1||col1>8){
        cout<<"Invalid Value - Enter a value between 1 and 8"<<endl;
        cout<<"Select a piece \n";
        cout<<"Row = ";
        cin>>row1;
        cout<<"Column = ";
        cin>>col1;
    }
    //Move Piece to another location
    cout<<"Select a place to move your piece"<<endl;
    cout<<"Row = ";
    cin>>row2;
    cout<<"Column = ";
    cin>>col2;
    //Input Validation
    while(row2<1||row2>8||col2<1||col2>8){
        cout<<"Invalid Value - Enter a value between 1 and 8"<<endl;
        cout<<"Select a place to move your piece \n";
        cout<<"Row = ";
        cin>>row2;
        cout<<"Column = ";
        cin>>col2;
    }
    while(movcheck()==false){
        cout<<"Illegal Move!! "<<endl;
        input();
    }
}
void move(int &row1,int &col1,int &row2,int &col2,char &Turn,char (&board)[8][8]){
    bool kPiece=false;
    if (board[row1][col1]== 'B'||board[row1][row1]== 'W'){
        bool kPiece=true;
    }
    board[8][8]=' ';
    if(Turn=='B'){
        if(kPiece==false){
            board[row2][col2]='b';
        }else if(kPiece==true){
            board[row2][col2]='B';
        }
        Turn='W';
    }
    else if(Turn=='W'){
        if(kPiece==false){
            board[row2][col2]='w';
        }else if(kPiece==true){
            board[row2][col2]='W';
        }
        Turn='B';
    }
    if (leap==true){
        Leap();
    }
}
bool movcheck(int &row1,int &col1,int &row2,int &col2,char &Turn,char (&board)[8][8]){
    //Backwards movement-Non-King
    if(board[row1][col1]!='B'&&board[row1][col1]!='W'){
        if(Turn=='B'||Turn=='W'){
            if(row2<row1){
                leap=false;
                return false;
            }
        }
    }
    //Diagonal Movement
    if(row1==row2||col1==col2){
        leap=false;
        return false;
    }
    //Only move 1 row and 1 column
    if(((row2==row1 +1 || row2==row1 - 1)&&(col2>col1 + 1 || col2<col1 - 1))){
        leap=false;
        return false;
    }
    //Existing pieces in selected area
    if(board[row2][col2]!=' '){
        leap=false;
        return false;
    }
    //Selected space contains no piece
    if(board[row1][col1]==' '){
        leap=false;
        return false;
    }
    //Piece is leaping/jumping?
    if(row2>row1 +1 ||row2<row1 -1){
        //Too far of a Leap
        if(row2>row1 +2 || row2<row1 -2){
            leap=false;
            return false;
        }
        //WORK IN PROGRESS
    }
    
    
}
void Leap(int &row1,int &col1,int &row2,int &col2,char &Turn,char (&board)[8][8]){
    char ans;       //Choose to jump more than once
    //Leap removes piece
    if(row2>row1&&col2>col1){
        board[row2-1][col2-1]=' ';
    }
    else if(row2>row1&&col2<col1){
        board[row2-1][col2+1]=' ';
    }
    else if(row2<row1&&col2>col1){
        board[row2+1][col2-1]=' ';
    }
    else if(row2<row1&&col2<col1){
        board[row2+1][col2+1]=' ';
    }
    //Display Board and input changes
    
    //For more than 1 leap
    do{
        cout<<"You jumped once. Would you like to leap again, if possible?(Y/N)"<<endl;
        cin>>ans;
    }while(ans!='Y'&&ans!='y'&&ans!='N'&&ans!='n');
    if(ans=='Y'||ans=='y'){
        row1=row2;
        col1=col2;
        cout<<"Select the row and column where you'd like piece ("
                <<row1<<","<<col1<<") to jump to"<<endl;
        cin>>row2>>col2;
    }
    //Input Validation
    while(row2<1||row2>8||col2<1||col2>8){
        cout<<"Invalid Value - Enter a value between 1 and 8"<<endl;
        cout<<"Select a place to move your piece \n";
        cout<<"Row = ";
        cin>>row2;
        cout<<"Column = ";
        cin>>col2;
    }
    if(ans=='N'||ans=='n'){
        if(Turn=='B'){
            Turn='W';
        }
        if(Turn=='W'){
            Turn='B';
        }
    }
    //WORK IN PROGRESS
    
}
void king(char (&board)[8][8]){
    int King;
    for(int King=1;King<8;King++){
        if(board[1][King]=='b'){
            board[1][King]='B';
        }
        if(board[8][King]=='w'){
            board[8][King]='W';
        }
    }
}
void gameover(){

}
