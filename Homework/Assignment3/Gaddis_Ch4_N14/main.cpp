/* 
 * File:   main.cpp
 * Author: Victor Ramirez
 *
 * Created on September 30, 2017, 7:59 AM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) 
{
    int ch;         //checks
    int bsF, t;     //Bank service fees, total
    
    //Enter checks
    cout<<"Enter the number of checks written this month: \n";
    cin>>ch;
    
    // types of checks
    if(ch<20)
        t=ch*0.10;
    else if(ch<20)
        t=ch*0.10;
    else if(ch>=20&&ch<=39)
        t=ch*0.08;
    else if (ch>=40&&ch<=59)
        t=ch*0.06;
    else
        t=ch*0.04;
    bsF=(10+t);
    cout<<"Total bank service frees for the month is: $"<<bsF<<endl;
          

    return 0;
}

