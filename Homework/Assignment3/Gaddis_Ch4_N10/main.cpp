/* 
 * File:   main.cpp
 * Author: Victor Ramirez
 * Purpose: To enter number of a month when identifying a leap year
 * Created on September 30, 2017, 8:04 AM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) 

{
    int m, y, dim;      //month, year, days in month
        
    cout<<"Enter a month (1-12): ";
    cin>>m;
    (m<=0||m>12);
    
        cout<<"enter a year: ";
        cin>>y;
        
        if (m== 4||m==6||m==9||m==11)
        
            cout<<"30";
        
            else if(m==2)
        {
            if((y%4==0&&y%100!=0)||(y%400==0))
                cout<<"29 days";
            else cout<<"28 days";
        }
        else
            cout<<"31";
        
    
    return 0;
}

