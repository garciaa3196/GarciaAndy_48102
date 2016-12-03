/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on December 2, 2016, 6:47 PM
 * Purpose: Compare a number with values in an array using 
 *          linear and binary searches
 */

//System Libraries
#include <iostream> //I/O
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int bubSrt(int[],int);
int selSrt(int[],int);
void prntAry(int[],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int SIZE=20;
    int selAry[SIZE]={56,45,71,87,84,13,80,45,55,50,
                    78,12,100,65,38,75,7,45,68,77};
    int bubAry[SIZE]={89,2,25,18,64,26,36,99,95,72,42,
                    9,59,13,31,89,45,21,88,77};
    int utilize,result1,result2;
    
    //Input or initialize values
    cout<<"This program compares your charge account number to a list of numbers"
            <<endl;
    cout<<"How much of the array would you like to utilize? (0-19)"<<endl;
    cin>>utilize;
    
    //Input Validation
    while(utilize>20||utilize<1){
        cout<<"Not a valid size for the array"<<endl;
        cout<<"How much of the array would you like to utilize? (0-19)"<<endl;
        cin>>utilize;
    }
    
    //Bubble Sort
    result1=bubSrt(bubAry,utilize);
    
    //Print Array
    cout<<"Sorted by Bubble Sort"<<endl;
    prntAry(bubAry,utilize);
    cout<<"Number of passes: "<<result1<<endl;
    cout<<endl;
   
    //Selection Sort
    result2=selSrt(selAry,utilize);
    
    //Print Array
    cout<<"Sorted by Selection Sort"<<endl;
    prntAry(selAry,utilize);
    cout<<"Number of passes: "<<result2<<endl;

    //Exit
    return 0;
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
int bubSrt(int a[],int size){
    bool swap;
    int temp,count;
    do{
        swap=false;
        for(int i=0;i<size-1;i++){
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                swap=true;
                count++;
            }
        }
    }while(swap);
    return count;
}
int selSrt(int a[],int size){
    int minInd,minVal,count;
    for(int i=0;i<size;i++){
        minInd=i;
        minVal=a[i];
        for(int j=i+1;j<size;j++){
            if(a[j]<minVal){
                minVal=a[j];
                minInd=j;
            }
        }
        a[minInd]=a[i];
        a[i]=minVal;
        count++;
    }
    return count;
}