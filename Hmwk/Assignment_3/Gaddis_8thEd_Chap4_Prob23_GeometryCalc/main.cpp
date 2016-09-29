/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on September 29, 2016, 12:36 PM
 * Purpose: Create calculator able to calculate the area of a circle, rectangle,
            and triangle
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants
const float PI=3.14159;     //Value of PI from the book

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short radius,  //Circle
                   length,  //Rectangle
                   width,   //Rectangle
                   base,    //Triangle
                   height,  //Triangle
                   areaC,
                   areaR,
                   areaT;
    char input;
    
    //Input or initialize values Here
    cout<<"1. Calculate the Area of a Circle"<<endl;
    cout<<"2. Calculate the Area of a Rectangle"<<endl;
    cout<<"3. Calculate the Area of a Triangle"<<endl;
    cout<<"4. Quit"<<endl;
    cin>>input;
    
    //Process/Calculations Here
    areaC=PI*radius*radius;      //Area of a Circle
    areaR=length*width;          //Area of a Rectangle
    areaT=(base*height)/2        //Area of a Triangle
            
    
    //Exit
    return 0;
}

