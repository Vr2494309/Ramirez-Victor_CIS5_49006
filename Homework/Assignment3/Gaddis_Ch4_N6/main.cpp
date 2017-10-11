/* 
 * File:   main.cpp
 * Author: Victor Ramirez
 * Purpose: To calculate object's weight in newtons and display if it's too
 *  heavy or too light
 * Created on September 30, 2017, 8:04 AM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    int w, m;       // Weight and mass of object
    
    //Asks user to enter object's mass
    cout<<"Enter the object's mass:\n";
        cin>>m;
    
    //Calculates object's mass
    w=(m*9.8);
    
    //Displays object's weight for user
    cout<<"\nThe object's weight is "<<w<<" newtons\n";
              
    //Utilizing if, else statements to determines if object's weight is too  
    //heavy or too light in newtons
    if (w>1000)
        cout<<"\nThe object's weight is too heavy\n";
    else if (w<10)
        cout<<"\nthe object is too light\n";
    
    
    return 0;
}

