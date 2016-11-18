/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on October 10th, 9:30 AM
   Purpose:  Menu without Functions
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstdlib>
#include <ctime>
#include <iomanip>    //Formatting
#include <fstream>    //File I/O
#include <cstring>    //Strings
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void getScr(int &,int &,int &,int &,int &); //Get the scores
float AvgM1(int,int,int,int,int);     //Average score w/o minimum
int  getMin(int,int,int,int,int);     //Find minimum score
int popSize(int,float,float);         //Population Size
float getGal(float &,float &);
float getHour(float &,float &);
bool isPrime(int &);    //Tests for prime numbers
int getAcc(string &);
int LowAcc(int &,int &,int &,int &,int &);
float KinErgy(float &,float &);
float tempCnv(float);
void dollars(int,int &,int &,int &,int&,int &);
void cents(int,int &,int &,int &,int &);
bool isLpYr(int);  //Leap Year?
int  getCVal(int); //Get the Century value
int  getYVal(int); //Get the Year value
int  getMVal(int,int);//Get the Month value
string dayOfWk(int,int,int);    //Gives day of week


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;    //Choice from menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for Gaddis 8thEd Chap6 Prob11 Avg Test Scores"<<endl;
        cout<<"2.  Type 2  for Gaddis 8thEd Chap6 Prob16 Population Size"<<endl;
        cout<<"3.  Type 3  for Gaddis 8thEd Chap6 Prob18 Paint Job"<<endl;
        cout<<"4.  Type 4  for Gaddis 8thEd Chap6 Prob22 Prime Numbers"<<endl;
        cout<<"5.  Type 5  for Gaddis 8thEd Chap6 Prob23 Prime Number List"<<endl;
        cout<<"6.  Type 6  for Gaddis 8thEd Chap6 Prob4  Safe Driving"<<endl;
        cout<<"7.  Type 7  for Gaddis 8thEd Chap6 Prob6  Kinetic Energy"<<endl;
        cout<<"8.  Type 8  for Gaddis 8thEd Chap6 Prob7  Temperature Conversion"<<endl;
        cout<<"9.  Type 9  for Savitch 9thEd Chap5 Prob4 Change"<<endl;
        cout<<"10. Type 10 for Savitch 9thEd Chap5 Prob7 Days"<<endl;
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:{
                cout<<"Average Test Scores"<<endl;
                //Declare Variables
                int s1,s2,s3,s4,s5;     //Test Scores
                float avg;              //Average Score

                //Input values
                getScr(s1,s2,s3,s4,s5);

                //Process Values -> Map Inputs to Outputs
                avg=AvgM1(s1,s2,s3,s4,s5);

                //Display Output
                cout<<fixed<<showpoint<<setprecision(2);
                cout<<"The average minus lowest score = "<<avg<<endl;

                break;
            }
            case 2:{
                cout<<"Population Size"<<endl;
                int Pop,birth,death,years;
                float bRate,dRate;

                //Input Values
                cout<<"This program measures population as a function of time"<<endl;
                cout<<"Population Size?"<<endl;
                cin>>Pop;
                cout<<"Birth Rate per year?"<<endl;
                cin>>birth;
                cout<<"Death Rate per year?"<<endl;
                cin>>death;
                cout<<"How many years pass?"<<endl;
                cin>>years;

                //Input Validation
                if(Pop<2||birth<0||death<0||years<1){
                    cout<<"Invalid value - Please enter a valid value"<<endl;
                    cout<<"Population Size?"<<endl;
                    cin>>Pop;
                    cout<<"Birth Rate per year?"<<endl;
                    cin>>birth;
                    cout<<"Death Rate per year?"<<endl;
                    cin>>death;
                    cout<<"How many years pass?"<<endl;
                    cin>>years;
                }

                //Process Values -> Map Inputs to Outputs
                bRate=1.0f*birth/Pop;
                dRate=1.0f*death/Pop;
                for(int year=1;year<=years;year++){
                    Pop=popSize(Pop,dRate,bRate);
                    cout<<"Year "<<year<<" = population of "<<Pop<<endl;
                }
                        
                break;
            }
            case 3:{
                cout<<"Paint Job"<<endl;
                float gallon,hours,Pcost,Lcost,totCost,feet,price;
                int rooms;

                //Input Values
                cout<<"This program calculates gallons of paint required,hours of labor,"
                        "cost of paint,cost of labor, and total cost"<<endl;
                cout<<"How many rooms are you painting?"<<endl;
                cin>>rooms;
                cout<<"How much is each gallon of paint?"<<endl;
                cin>>price;

                //Process Values
                for(int room=1;room<=rooms;room++){
                    cout<<"What is the size in sq feet of room "<<room<<"?"<<endl;
                    cin>>feet;
                    getGal(gallon,feet);
                    getHour(hours,feet);
                }

                //Calculations
                Pcost=price*gallon;
                Lcost=hours*25;
                totCost=Pcost+Lcost;

                //Display Output
                cout<<"Number of Gallons required: "<<gallon<<endl;
                cout<<"Number of Hours required:   "<<hours<<endl;
                cout<<fixed<<showpoint<<setprecision(2);
                cout<<"Cost of Paint:              $"<<Pcost<<endl;
                cout<<"Cost of Labor:              $"<<Lcost<<endl;
                cout<<"Total Cost of Job:          $"<<totCost<<endl;

                break;
            }
            case 4:{
                cout<<"Prime Numbers"<<endl;
                int num;
    
                //Input values
                cout<<"This program tests for prime numbers"<<endl;
                do{
                    cout<<"Enter a value"<<endl;
                    cin>>num;

                //Display Output
                    if(isPrime(num)==true){
                        cout<<num<<" is a prime number"<<endl;
                    }
                    else{
                        cout<<num<<" is not a prime number"<<endl;
                    }
                }while(num>=1);
    
                break;
            }
            case 5:{
                cout<<"Prime Number List"<<endl;
                int num;
                ofstream in;

                //Open the file
                in.open("List.dat");

                //Process Values - Map Inputs to Outputs
                for(int num=1;num<=100;num++){
                    if(isPrime(num)==true){
                        cout<<num<<endl;
                        in<<num<<" ";
                    }
                }
                //Close the File
                in.close();
                
                break;
            }
            case 6:{
                cout<<"Safest Driving Region"<<endl;
                int n,s,w,e,c,Lowest;
                string regName;

                //Input Values
                cout<<"This program determines the safest of 5 regions for driving"<<endl;
                //North
                regName="North";
                n=getAcc(regName);

                //South
                regName="South";
                s=getAcc(regName);

                //West
                regName="West";
                w=getAcc(regName);

                //East
                regName="East";
                e=getAcc(regName);

                //Central
                regName="Central";
                c=getAcc(regName);

                //Find the lowest number of accidents
                Lowest=LowAcc(n,s,w,e,c);

                //Safest region
                if( LowAcc(n,s,w,e,c)==n){
                    regName="North";
                }
                if( LowAcc(n,s,w,e,c)==s){
                    regName="South";
                }
                if( LowAcc(n,s,w,e,c)==w){
                    regName="West";
                }
                if( LowAcc(n,s,w,e,c)==e){
                    regName="East";
                }
                if( LowAcc(n,s,w,e,c)==c){
                    regName="Central";
                }

                //Display Output
                cout<<"The safest region is "<<regName<<" with "<<
                        Lowest<<" accidents "<<endl;
                
                break;
            }
            case 7:{
                cout<<"Kinetic Energy"<<endl;
                float mass,vlcity,KinE;

                //Input Values
                cout<<"This program calculates the Kinetic Energy in a moving object"<<endl;
                cout<<"Enter the mass of the object in kilograms"<<endl;
                cin>>mass;
                cout<<"Enter the velocity of the object in meters/second"<<endl;
                cin>>vlcity;

                //Process Values
                KinE=KinErgy(mass,vlcity);

                //Display Output
                cout<<"The Kinetic Energy is "<<KinE<<" Joules"<<endl;
                
                break;
            }
            case 8:{
                cout<<"Temperature Conversion"<<endl;
                int degF;

                //Process Values -> Map Inputs to Outputs
                cout<<"Degrees F  Degrees C"<<endl;
                cout<<fixed<<showpoint<<setprecision(2);
                for(int degF=0;degF<=20;degF++){
                    cout<<setw(6)<<degF<<setw(12)<<tempCnv(degF)<<endl;
                }
                
                break;
            }
            case 9:{
                cout<<"Exact Change"<<endl;
                //Declare Variables
                int n50s,n20s,n10s,n5s,n1s;     //Dollar quantities
                int quarter,dime,nickel,penny;  //Coin quantities
                float price,tender;             //Price and Tendered amounts             
                int pDol,pCent,tDol,tCent;      //Price and Tendered dollars and cents
    
                //Input values
                do{
                    cout<<"This program calculates exact change"<<endl;
                    cout<<"What is the price of the purchase = $"<<endl;
                    cin>>price;
                    cout<<"What is the tendered amount = $ > Price"<<endl;
                    cin>>tender;
                }while(tender-price<0);

                //First step calculate dollars and cents
                pDol=price+0.005f;           //Partial penny
                pCent=(price-pDol)*100+0.005;//Number of cents with partial penny   
                tDol=tender+0.005f;           //Partial penny
                tCent=(tender-tDol)*100+0.005;//Number of cents with partial penny

                //Display the amounts
                cout<<"The price input     = $"<<pDol<<"."<<pCent<<endl;
                cout<<"The tendered amount = $"<<tDol<<"."<<tCent<<endl;
                if(tCent-pCent<0){
                    tDol--;
                    tCent+=100;
                }
                cout<<"The change amount   = $"<<tDol-pDol<<"."<<tCent-pCent<<endl;

                //Calculate the Change
                dollars(tDol-pDol,n50s,n20s,n10s,n5s,n1s);
                cout<<n50s<<" number of 50's"<<endl;
                cout<<n20s<<" number of 20's"<<endl;
                cout<<n10s<<" number of 10's"<<endl;
                cout<<n5s<<" number of 5's"<<endl;
                cout<<n1s<<" number of 1's"<<endl;

                //Calculate the Change
                cents(tCent-pCent,quarter,dime,nickel,penny);
                cout<<quarter<<" number of quarter's"<<endl;
                cout<<dime<<" number of dime's"<<endl;
                cout<<nickel<<" number of nickel's"<<endl;
                cout<<penny<<" number of penny's"<<endl;

                break;
            }
            case 10:{
                cout<<"Day of the Week"<<endl;
                //Declare Variables
                int Mon,Day,Yr;

                //Input values
                cout<<"Input a date(MM DD YY)"<<endl;
                cin>>Mon>>Day>>Yr;

                //Process Values - Map Inputs to Outputs
                cout<<"Day of the Week: "<<dayOfWk(Mon,Day,Yr)<<endl;
                
                break;
            }//End Case
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************  Get Score  ****************************************
//Purpose:  Find minimum of 5 scores
//Input&Output:   Inputs to the function here -> Description, Range, Units
//  s1-s5-> 5 scores between [0,100]
//******************************************************************************
void  getScr(int &s1,int &s2,int &s3,int &s4,int &s5){
    //Get data and determine if valid for each score
    int x;
    do{
        cout<<"Input score 1 between 0 and 100"<<endl;
        cin>>x;
    }while(x<0||x>100);
    s1=x;
    do{
        cout<<"Input score 2 between 0 and 100"<<endl;
        cin>>x;
    }while(x<0||x>100);
    s2=x;
    do{
        cout<<"Input score 3 between 0 and 100"<<endl;
        cin>>x;
    }while(x<0||x>100);
    s3=x;
    do{
        cout<<"Input score 4 between 0 and 100"<<endl;
        cin>>x;
    }while(x<0||x>100);
    s4=x;
    do{
        cout<<"Input score 5 between 0 and 100"<<endl;
        cin>>x;
    }while(x<0||x>100);
    s5=x;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Get Min   ****************************************
//Purpose:  Find minimum of 5 scores
//Inputs:   Inputs to the function here -> Description, Range, Units
//  s1-s5-> 5 scores between [0,100]
//Output:   Outputs to the function here -> Description, Range, Units
//  min ->  Minimum of 5 scores
//******************************************************************************
int getMin(int s1,int s2,int s3,int s4,int s5){
    int min=s1;
    if(min>s2){
        min=s2;
    }
    if(min>s3){
        min=s3;
    }
    if(min>s4){
        min=s4;
    }
    if(min>s5){
        min=s5;
    }
    return min;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Get Min   ****************************************
//Purpose:  Find minimum of 5 scores
//Inputs:   Inputs to the function here -> Description, Range, Units
//  s1-s5-> 5 scores between [0,100]
//Output:   Outputs to the function here -> Description, Range, Units
//  avg -> Average score w/ minimum
//******************************************************************************
float AvgM1(int s1,int s2,int s3,int s4,int s5){
    return .25f*(s1+s2+s3+s4+s5-getMin(s1,s2,s3,s4,s5));
}
int popSize(int Pop,float death,float birth){
    return Pop*(1+birth-death);
}
float getGal(float &gallon,float &feet){
    return gallon+=feet/110;        //Gallons for number of feet
}
float getHour(float &hours,float &feet){
    hours=feet*8/110;
    return hours+=feet*8/110;     //Hours of labor for number of feet
}
bool isPrime(int &num){
    if (num<1){
        return false;
    }
    else if(num<=3){
        return true;
    }
    else if(num%2==0||num%3==0||num%5==0){
        return false;
    }
}
int getAcc(string &regName){
    int num;
    cout<<"How many accidents occurred in the "<<regName<<" region"<<endl;
    cin>>num;
    return num;
}
int LowAcc(int &n,int &s,int &w,int &e,int &c){
    int min=n;
    if(min>s){
        min=s;
    }
    if(min>w){
        min=w;
    }
    if(min>e){
        min=e;
    }
    if(min>c){
        min=c;
    }
    return min;
}
float KinErgy(float &mass,float &vlcity){
    return .5*mass*vlcity*vlcity;
}
//Temperature Conversion from Fahrenheit to Celsius
//Input
//f - Fahrenheit
//Output
//c - Celsius
float tempCnv(float f){
    return (f-32.0f)*5/9;
}
void cents(int d,int &n25s,int &n10s,int &n5s,int &n1s){
    //Calculate the change
    n25s=d/25;  //How many 25's
    d-=25*n25s;
    n10s=d/10;  //How many 10's
    d-=10*n10s;
    n5s=d/5;    //How many 5's
    d-=5*n5s;
    n1s=d;
}
void dollars(int d,int &n50s,int &n20s,int &n10s,int &n5s,int &n1s){
    //Calculate the change
    n50s=d/50;  //How many 50's
    d-=50*n50s;
    n20s=d/20;  //How many 20's
    d-=20*n20s;
    n10s=d/10;  //How many 10's
    d-=10*n10s;
    n5s=d/5;    //How many 5's
    d-=5*n5s;
    n1s=d;
}
string dayOfWk(int m,int d,int y){
    int nDay=(d+getMVal(m,y)+getYVal(y)+getCVal(y))%7;
    switch(nDay){
        case 0:return "Sunday";
        case 1:return "Monday";
        case 2:return "Tuesday";
        case 3:return "Wednesday";
        case 4:return "Thursday";
        case 5:return "Friday";
        case 6:return "Saturday";
        default:return "Bad Day";
    }
}

int  getMVal(int m,int y){
    switch(m){
        case 1:return isLpYr(y)?6:0;
        case 2:return isLpYr(y)?2:3;
        case 3:case 11:return 3;
        case 4:case  7:return 6;
        case 9:case 12:return 5;
        case 5:return 1;
        case 6:return 4;
        case 8:return 2;
        case 10:return 0;
        default:cout<<"Bad number"<<endl;exit(1);
    }
}

int getYVal(int year){
    int dig2=year%100;
    return dig2+dig2/4;
}

int getCVal(int year){
    return 2*(3-(year/100)%4);
}

bool isLpYr(int year){
    return ((year%400==0)||((year%4==0)&&(year%100!=0)));
}
