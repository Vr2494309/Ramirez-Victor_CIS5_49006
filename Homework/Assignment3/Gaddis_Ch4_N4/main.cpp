 /* 
 * File:   main.cpp
 * Author: Victor Ramirez
 * Purpose: To tell user the user the rectangle has a greater or the same area
 * Created on September 30, 2017, 7:45 AM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Declare Variables
    int l1, l2;     //Length of rectangle 
    int w1, w2;     //Width of rectangle
    int rA1, rA2;   //Are of rectangle
    
    // Ask user to enter the lengths and widths of two rectangles
    cout<<"Enter the length and width of the first rectangle\n";
        cin>>l1>>w1;
        
    cout<<"Enter the length and width of the second rectangle\n";
        cin>>l2>>w2;
        
    //calculates the areas of rectangles
    rA1=l1*w1;
    rA2=l2*w2;
        
    // If else statements to determine if rectangle's area
    if (rA1==rA2)
        cout<<"The area of the rectangles are the same";
    else if (rA1>rA2)
        cout<<"The area of the first rectangle is greater than the second "<<
            "rectangle\n";
    else if (rA1<rA2)
        cout<<"The area of the second rectangle is greater than the first "<<
            "rectangle\n";
        
    return 0;
}

