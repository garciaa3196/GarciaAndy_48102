/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on November 17, 2016, 11:10 AM
 * Purpose: Combine the 3 functions into 1 function
 */

//System Libraries Here
#include <iostream>     //Input/Output Library
#include <cstdlib>      //Random
#include <ctime>        //Time
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int);
void markSrt(int [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int const SIZE=100;
    int array[SIZE],utilize;
    
    //Input or initialize values Here
    do{
        cout<<"How much of the array to utilize?"<<endl;
        cout<<"Choose a number between 2 and 100"<<endl;
        cin>>utilize;
    }while(utilize<2||utilize>100);
    
    //Fill the array
    fillAry(array,utilize);
    
    //Output Located Here
    prntAry(array,utilize);
    
    //Test out minPos
    markSrt(array,utilize);
    
    //Output Located Here
    prntAry(array,utilize);

    //Exit
    return 0;
}
void markSrt(int a[],int size){
    for(int i=0;i<size-1;i++){
        //minPos(a,size,i);
        for(int i=pos+1;i<size;i++){
            if(a[pos]>a[i]){
                a=a^b;
                b=a^b;
                a=a^b;
            }
        }
    }
}

void minPos(int a[],int size,int pos){
    
}

void swap(int &a,int &b){
    //Temp memory Swap
    //int temp=a;
    //a=b;
    //b=temp;
    //In place memory Swap
    a=a^b;
    b=a^b;
    a=a^b;
}

void prntAry(int a[],int n){
    //Output Located Here
    cout<<"The Array"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%10==9)cout<<endl;
    }
    cout<<endl;
}

void fillAry(int a[],int n){
    //Fill the array
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;      //Random 2 digit number
    }
}

