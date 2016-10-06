/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 5, 2016, 6:02 PM
 * Purpose: Determine the cost for a package of a particular weight traveling a
 *          particular distance
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short  weight,     //Weight of the package in Kilograms
                    dist;       //Distance the package traveled in miles
    float       rate1=1.10f,    //Cost for a package 2kg or less per 500 miles
                rate2=2.20f,    // Cost/500mi for a package between 2kg and 6kg
                rate3=3.70f,    // Cost/500mi for package between 6kg and 10kg
                rate4=4.80f,    // Cost/500mi for package between 10kg and 20kg
                cost;
                 
    //Input Values
    cout<<"This program determines the cost to ship a package"<<endl;
    cout<<"Input the weight of the package in kg"<<endl;
    cin>>weight;
    cout<<"Input the distance it is to be shipped in miles"<<endl;
    cin>>dist;
    
    //Input Validation
    if (weight<=0){
        cout<<"Error: Invalid value"<<endl;
        return 1;
    }
    if(weight>20){
        cout<<"Error: Company does not ship packages over 20kg"<<endl;
        return 1;
    }
    if(dist<10){
        cout<<"Error: Package must travel at least 10 miles"<<endl;
        return 1;    
    }
    if(dist>3000){
        cout<<"Error: Company does not ship over 3000 miles"<<endl;
        return 1;
    }
    
    //Process Values - Map Inputs to Outputs
    if(weight<2){
        cost=rate1*dist/500;          //Cost to ship package 2kg or less
        cout<<"Weight of Package: "<<weight<<" kg"<<endl;
        cout<<"Distance Shipped: "<<dist<<" mi."<<endl;
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Shipping Cost: $"<<cost<<endl;
    }
    else if(weight>2 && weight<=6){
        cost=rate2*dist/500;          //Cost to ship package 3-6kg
        cout<<"Weight of Package: "<<weight<<" kg"<<endl;
        cout<<"Distance Shipped: "<<dist<<" mi."<<endl;
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Shipping Cost: $"<<cost<<endl;
    }
    else if(weight>6 && weight<=10){
        cost=rate3*dist/500;          //Cost to ship package 7-10kg
        cout<<"Weight of Package: "<<weight<<" kg"<<endl;
        cout<<"Distance Shipped: "<<dist<<" mi."<<endl;
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Shipping Cost: $"<<cost<<endl;
    }
    else if(weight>10 && weight<=20){
        cost=rate4*dist/500;          //Cost to ship package 11-20kg
        cout<<"Weight of Package: "<<weight<<" kg"<<endl;
        cout<<"Distance Shipped: "<<dist<<" mi."<<endl;
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Shipping Cost: $"<<cost<<endl;
    }
    
    //Exit
    return 0;
}    

