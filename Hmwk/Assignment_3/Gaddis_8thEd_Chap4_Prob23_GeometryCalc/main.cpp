/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on September 29, 2016, 12:36 PM
 * Purpose: Create calculator able to calculate the area of a circle, rectangle,
            and triangle
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants
const float PI=3.14159;     //Value of PI from the book

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short radius,  //Radius of Circle in inches
                   length,  //Length of Rectangle in inches
                   width,   //Width of Rectangle in inches
                   base,    //Base of a Triangle in inches
                   height,  //Height of Triangle in inches
                   input,   //Choose between the type of shape to calculate area
                   areaC,   //Area of Circle in inches
                   areaR,   //Area of Rectangle in inches
                   areaT;   //Area of Rectangle in inches
    
    //Input or initialize values Here
    cout<<"1. Calculate the Area of a Circle"<<endl;
    cout<<"2. Calculate the Area of a Rectangle"<<endl;
    cout<<"3. Calculate the Area of a Triangle"<<endl;
    cout<<"4. Quit"<<endl;
    cout<<"Enter your desired choice (1-4):"<<endl;
    cin>>input;
    
    //Input Validation
    if(input>4){
        cout<<"Error"<<endl;
        return 1;
    }
    if(radius<0){
        cout<<"Error: Please enter a positive value"<<endl;
        return 1;
    }
    if(length<0){
        cout<<"Error: Please enter a positive value"<<endl;
        return 1;
    }
    if(width<0){
        cout<<"Error: Please enter a positive value"<<endl;
        return 1;
    }
    if(base<0){
        cout<<"Error: Please enter a positive value"<<endl;
        return 1;
    }
    if(height<0){
        cout<<"Error: Please enter a positive value"<<endl;
        return 1;
    }
    
    //Calculations Here
    areaC=PI*radius*radius;      //Area of a Circle in inches
    areaR=length*width;          //Area of a Rectangle in inches
    areaT=(base*height)/2;        //Area of a Triangle in inches
    
    //Process Values - Map Inputs to Outputs
    if(input=1){
        cout<<"Input the radius of a circle in inches"<<endl;
        cin>>radius;
        cout<<"Radius of the circle = "<<radius<<" inches"<<endl;
        cout<<"Area of the circle   = "<<areaC<<" inches"<<endl;
    }
    
   
    //Display Output
    
    //Exit
    return 0;
}

