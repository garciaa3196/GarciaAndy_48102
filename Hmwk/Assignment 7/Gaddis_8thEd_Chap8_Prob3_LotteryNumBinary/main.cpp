/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on December 1, 2016, 4:39 PM
 * Purpose: Compare a number with values in an array using a binary search
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int binSrch(int[],int,int);
void markSrt(int[],int);
void prntAry(int[],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int SIZE=10;
    int array[SIZE]={13579,26791,26792,33445,55555,62483,77777,79422,85647,93121};
    int num,result;
    
    //Input or initialize values Here
    cout<<"This program compares the winning lottery number to your lottry numbers"
            <<endl;
    cout<<"Enter the 5-digit winning lottery number"<<endl;
    cin>>num;
    
    //Confirm 5-digit number
    //Input Validation
    while(num<10000||num>99999){
        cout<<"Invalid Value - Must be 5 digits"<<endl;
        cout<<"Enter the 5-digit winning lottery number"<<endl;
        cin>>num;
    }
    //Test out minPos
    markSrt(array,SIZE);
    
    //Print Array
    prntAry(array,SIZE);
    
    //Results
    result=binSrch(array,SIZE,num);
    
    //Win?
    if(result>=0&&result<=9){
    cout<<"The number "<<num<<" was found at index "<<result<<endl;
    cout<<"Congratulations, you win!!"<<endl;
    }
    else{
        cout<<"Sorry, you lose."<<endl;
    }

    //Exit
    return 0;
}
int binSrch(int a[],int n,int val){
    //Declare and setup
    int begRng=0,endRng=n-1;
    //Loop until found
    do{
        int midPnt=(endRng+begRng)/2;
        if(a[midPnt]==val){
            return midPnt;
        }    
        else if(a[midPnt]<val){
            begRng=midPnt+1;
        }else if(a[midPnt]>val){
            endRng=midPnt;
        }
    }while(endRng>=begRng);
    return -1;
}
void markSrt(int a[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]>a[j]){
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }
    }
}
void prntAry(int a[],int size){
    cout<<"The Array"<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
        if(i%10==9){
            cout<<endl;
        }
    }
}