/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 13, 2016, 11:32 AM
 * Purpose:   
 */

//System Libraries Here
#include <iostream>     //Input/Output Library
#include <fstream>      //File I/O
#include <string>       //String Library   
using namespace std;    //Namespace used in the System Library

//User Libraries Here

//Global Constants

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables
    ifstream in;
    ofstream out;
    int rows,cols;
    string line;
    
    //Input values
    in.open("map.dat");
    in>>rows>>cols;
    cout<<"rows = "<<rows<<" cols = "<<cols<<endl;
 
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
    
    //Where do you want to place the player
    int pyrow,
        pycol;
    cout<<"Where to position the player in row and column"<<endl;
    cin>>pyrow>>pycol;
    cout<<"Player position in Y = "<<pyrow<<" Player position in X = "<<pycol<<endl;
    
    //Read back into file
    in.close();
    in.clear();
    
    //Input values
    in.open("map.dat");
    in>>rows>>cols;
    cout<<"rows = "<<rows<<" cols = "<<cols<<endl;
 
    //Display Output and write to the player file
    out.open("player.dat");
    getline(in,line);
    for(int row=1;row<=rows;row++){
        getline(in,line);
        if(row==pyrow&&line[pycol-1]=='0')line[pycol-1]='P';
        cout<<row<<" "<<line<<endl;
        out<<line;
    }
    cout<<"  ";
    for(int col=1;col<=cols;col++){
        cout<<col;
    }
    cout<<endl;
    
    //Close the file
    in.close();
    out.close();
    //Exit
    return 0;
}

