/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on November 29, 2016, 11:23 AM
 * Purpose: COnvert Mark Sort 1 Function to pointer notation
 */

//System Libraries
#include <iostream> //Input/Output Objects
#include <cstdlib>  //Random
#include <ctime>    //Time
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void fillAry(int *,int);
void prntAry(int *,int);
void markSrt(int *,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int const SIZE=100;
    int array[SIZE],utilize, *arrPntr;
    
    //Pointer
    arrPntr=array;
    
    //Input or initialize values Here
    do{
        cout<<"How much of the array to utilize?"<<endl;
        cout<<"Choose a number between 2 and 100"<<endl;
        cin>>utilize;
    }while(utilize<2||utilize>100);
    
    //Fill the array
    fillAry(arrPntr,utilize);
    
    //Output Located Here
    prntAry(arrPntr,utilize);
    
    //Test out minPos
    markSrt(arrPntr,utilize);
    
    //Output Located Here
    prntAry(arrPntr,utilize);

    //Exit
    return 0;
}
void markSrt(int *a,int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(*(a+i)>*(a+j)){
                *(a+i)=*(a+i)^*(a+j);
                *(a+j)=*(a+i)^*(a+j);
                *(a+i)=*(a+i)^*(a+j);
            }
        }
    }
}
void prntAry(int *a,int n){
    //Output Located Here
    cout<<"The Array"<<endl;
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<" ";
        if(i%10==9)cout<<endl;
    }
    cout<<endl;
}
void fillAry(int *a,int n){
    //Fill the array
    for(int i=0;i<n;i++){
        *(a+i)=rand()%90+10;//Random 2 digit number
    }
}
