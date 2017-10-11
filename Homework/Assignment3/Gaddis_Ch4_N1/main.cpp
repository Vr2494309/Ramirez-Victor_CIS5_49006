/* 
 * File:   main.cpp
 * Author: Victor Ramirez
 * Purpose: Program will determine which number is smaller and which is larger
 * Created on September 30, 2017, 7:43 AM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) 
{
    //Declaring variables
    int n1, n2;     // Number 1 & 2
    
    //Asks user to enter 2 #'s
    cout<<"Enter the first number: \n";
    cin>>n1;
    cout<<"Enter the second number: \n";
    cin>>n2;
    
    // Utilize condition Operator
    n1>n2?cout<<"The first number is larger and the second number is smaller":
        cout<<" The first number is smaller and the second number is larger.";
        
    
    
    

    return 0;
}

