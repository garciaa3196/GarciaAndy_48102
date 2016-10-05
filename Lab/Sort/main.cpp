/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 4, 2016, 11:24 AM
 * Purpose: Sort the values given by the user
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants


//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    short a,
          b,
          c,
          d;
    
    //Input or initialize values Here
    cout<<"Input these values for a,b,c,d"<<endl;
    cin>>a>>b>>c>>d;
    
    //Sort - a,b
    cout<<"Sort a and b"<<endl;
    if(a>b){
        cout<<b<<" "<<a<<endl;
    }
    else{
        cout<<a<<" "<<b<<endl;
    }
    
    //Sort - a,b,c
    cout<<"Sort a, b and c"<<endl;
    if     (a>b&&b>c){cout<<c<<" "<<b<<" "<<a<<endl;}
    else if(b>a&&a>c){cout<<c<<" "<<a<<" "<<b<<endl;}
    else if(b>c&&c>a){cout<<a<<" "<<c<<" "<<b<<endl;}
    else if(a>c&&c>b){cout<<b<<" "<<c<<" "<<a<<endl;}
    else if(c>a&&a>b){cout<<c<<" "<<a<<" "<<b<<endl;}
    else if(c>b&&b>a){cout<<a<<" "<<b<<" "<<c<<endl;}
    
    //Sort - a,b,c,d
    //C is smallest
    if      (a>b && b>d && d>c){cout<<c<<" "<<d<<" "<<b<<" "<<a<<endl;}
    else if (a>d && d>b && b>c){cout<<c<<" "<<b<<" "<<d<<" "<<a<<endl;}
    else if (b>d && d>a && a>c){cout<<c<<" "<<a<<" "<<d<<" "<<b<<endl;}
    else if (d>a && a>b && b>c){cout<<c<<" "<<b<<" "<<a<<" "<<d<<endl;}
    else if (b>a && a>d && d>c){cout<<c<<" "<<a<<" "<<a<<" "<<b<<endl;}
    else if (d>b && b>a && a>c){cout<<c<<" "<<a<<" "<<b<<" "<<d<<endl;}
    
    //D is smallest        
    else if(a>b&&b>c&&c>d){cout<<d<<" "<<c<<" "<<b<<" "<<a<<endl;}
    else if(b>a&&a>c&&c>d){cout<<d<<" "<<c<<" "<<a<<" "<<b<<endl;}
    else if(b>c&&c>a&&a>d){cout<<d<<" "<<a<<" "<<c<<" "<<b<<endl;}
    else if(a>c&&c>b&&b>d){cout<<d<<" "<<b<<" "<<c<<" "<<a<<endl;}
    else if(c>a&&a>b&&b>d){cout<<d<<" "<<c<<" "<<a<<" "<<b<<endl;}
    else if(c>b&&b>a&&a>d){cout<<d<<" "<<a<<" "<<b<<" "<<c<<endl;}
    
    //A is smallest
    if (b>c && c>d && d>a){cout<<a<<" "<<d<<" "<<c<<" "<<b<<endl;
    else if(b>d && d>c && c>a){cout<<a<<" "<<c<<" "<<d<<" "<<b<<endl;
    
    
              
    
    
    
    
    //Process Values - Map input to output
    
    //Exit
    return 0;
}

