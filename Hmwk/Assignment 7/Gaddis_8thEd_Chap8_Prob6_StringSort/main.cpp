/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on December 1, 2016, 3:17 PM
 * Purpose: Sort a string of names in an array
 */

//System Libraries
#include <iostream> //I/O
#include <cstring>  //Strings
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void SelSrt(string[],int);
void prntAry(string[],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int const SIZE=20;
    string names[SIZE] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                                "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                                "Taylor, Terri", "Johnson, Jill",
                                "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                                "James, Jean", "Weaver, Jim", "Pore, Bob",
                                "Rutherford, Greg", "Javens, Renee",
                                "Harrison, Rose", "Setzer, Cathy",
                                "Pike, Gordon", "Holland, Beth" };
    
    //Sort the array
    SelSrt(names,SIZE);
    
    //Print Array
    prntAry(names,SIZE);
    

    //Exit
    return 0;
}
void SelSrt(string a[],int size){
    int i,minInd;
    string minVal;
    for(i=0;i<size;i++){
        minInd=i;
        minVal=a[i];
        for(int j=i+1;j<size;j++){
            if(a[j]<minVal){
                minVal=a[j];
                minInd=j;
            }
        }
    a[minInd] = a[i];
    a[i] = minVal;
    }
}
void prntAry(string a[],int n){
    cout<<"The Array"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
            cout<<endl;
    }
}