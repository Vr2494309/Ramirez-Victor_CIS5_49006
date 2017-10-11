/* 
 * File:   main.cpp
 * Author: Victor Ramirez
 * Purpose: 
 * Created on September 30, 2017, 8:00 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char** argv) 
{
    int ch;        // choice
    int d;          //distance
    int aot;        //amount of time
    int a=1100;     //Air, feet per second
    int w=4900;     //Water, feet per second
    int st=16400;    //steel feet per second
    
    cout<<"The Speed of Sound\n";
    cout<<"Please select the following: \n";
    cout<<"1. Air\n";
    cout<<"2. Water\n";
    cout<<"3. Steel\n";
    cin>>ch;
    cout<<"Enter the distance the sound wave will travel: ";
    cin>>d;
    cout<<setw(4)<<fixed;
    
    if(d==0)
    {
        cout<<"Distance must be greater than zero\n";
    }
    else if(ch>=1&&ch<=3)
    {
        switch(ch)
        {
        case 1: aot=d/a;
            break;
        case 2: aot=d/w;
            break;
        case 3: aot=d/st;
        }
        
        cout<<"The amount of time it will take to travel is: ";
        cout<<aot;
        cout<<"seconds"<<endl;
    }
          

    return 0;
}

