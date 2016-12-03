/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on December 1, 2016, 12:17 PM
 * Purpose: Compare a number with values in an array using 
 *          linear and binary searches
 */

//System Libraries
#include <iostream> //I/O
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int linSrch(int[],int&,int&);
int binSrch(int[],int,int);
void markSrt(int[],int);
void prntAry(int[],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int SIZE=20;
    int array[SIZE]={5658845,4520125,7895122,8777541,8451277,1302850,
                8080152,4562555,5552012,5050552,7825877,1250255,
                1005231,6545231,3852085,7576651,7881200,4581002,6872041,7777777};
    int num,result;
    
    //Input or initialize values Here
    cout<<"This program compares your charge account number to a list of numbers"
            <<endl;
    cout<<"Enter your 7-digit charge account number"<<endl;
    cin>>num;
    
    //Input Validation
    while(num<1000000||num>9999999){  //Confirms 7-digit number
        cout<<"The value must be 7-digits long!!"<<endl;
        cout<<"Enter your 7-digit charge account number"<<endl;
        cin>>num;
    }
    
    //Print Array
    prntAry(array,SIZE);
    
    //Search and compare numbers - Linear Search
    linSrch(array,num,SIZE);
    
    //Sort the array
    markSrt(array,SIZE);
    
    //Print Array
    prntAry(array,SIZE);
    
    //Search and compare numbers - Binary Search
    result=binSrch(array,SIZE,num);
    
    //Results Binary
    cout<<"Number of Comparisons(binary) = "<<result<<endl;
    
    //Exit
    return 0;
}
int linSrch(int a[],int &num,int &SIZE){
    int i,numComp;
    numComp=1;
    for(int i=0;i<SIZE;i++){
        if(num==a[i]){
            cout<<"Your number matched!"<<endl;
            cout<<"Number of comparisons(linear) = "<<numComp<<endl;
        }
        numComp++;
    }
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
int binSrch(int a[],int n,int val){
   //Declare and setup
    int begRng=0,endRng=n-1,numComp=1;
    //Loop until found
    do{
        int midPnt=(endRng+begRng)/2;
        if(a[midPnt]==val){
            return numComp;
        }
        else if(a[midPnt]<val){
            begRng=midPnt+1;
        }else{
            endRng=midPnt;
        }
        numComp++;
    }while(endRng>begRng);
}
void prntAry(int a[],int size){
    cout<<"The Array"<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
        if(i%10==9){
            cout<<endl;
        }
    }
    cout<<endl;
}