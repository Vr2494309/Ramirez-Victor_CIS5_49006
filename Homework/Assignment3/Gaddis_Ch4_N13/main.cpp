/* 
 * File:   main.cpp
 * Author: Victor Ramirez
 * Purpose: Determines the number points earned from purchased books
 * Created on September 30, 2017, 7:48 AM
 */

#include <iostream>

using namespace std;

int main() 
{
     int pts;
     int books;    //points, Number of books purchased
    
    cout<<"Enter the number of books you purchased this month\n";
        cin>>books;
    
    //If else statements to determine points based on books purchased
        
    if(books <= 0)
    {
        pts=0;
        cout<<"You've earned: "<<pts<<endl;;
    }
        
    if(books == 1)
    {
        pts=5;
        cout<<"You've earned: "<<pts<<endl;
    }
        
    if(books == 2)
    {
        pts=15;
        cout<<"You've earned: "<<pts<<endl;
    }
    if(books == 3)
    {
        pts=30;
        cout<<"You've earned: "<<pts<<endl;
    }    
    if(books >= 4)
    {    
        pts=60;
        cout<<"You've earned: "<<pts<<endl;
    }           
    return 0;
}

