/* 
 * File:   main.cpp
 * Author: Victor Ramirez
 * Purpose: Change-counting game where user enters the number coins required
 *  to make a dollar
 * Created on September 30, 2017, 7:48 AM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    //Declaring constant & variables 
    int p=1;   // pennies
    int n=5;   //nickels
    int d=10;   //dimes
    int q=25;   //quarters
    float pN, nK, dM, qT;       //Amount user enters
    float pC, nC, dC, qC, tC;    //convert $ to coins
    
    // Welcomes user and asks to input $   
    cout<<"Welcome to change-counting\n";
    
    cout<<"Please enter the number of pennies you have:\n";
        cin>>pN;
    cout<<"Enter the number of nickels you have:\n";
        cin>>nK;
    cout<<"Enter the number of dimes you have:\n";
        cin>>dM;
    cout<<"Enter the number of quarters you have:\n";
        cin>>qT;
        
    //Convert $ to coins
    pC=pN*p;
    nC=nK*n;
    dC=dM*d;
    qC=qT*q;
    
    // Calculates total coins
    tC=pC+nC+dC+qC;
    
    // If else statements to determine whether or not coins = 100 to win
    if(tC==100)
        cout<<"\nCongratulations, you won the game!\n";
    else if(tC<100)
        cout<<"I'm sorry, but you lose";
    else if(tC>100)
        cout<<"I'm sorry but you lose";
 
    return 0;
}

