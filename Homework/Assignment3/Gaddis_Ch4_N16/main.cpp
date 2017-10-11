/* 
 * File:   main.cpp
 * Author: Victor Ramirez
 * Purpose: Asks user to enter Name and race time to determine who came in
 *      first, second, or third
 * Created on September 30, 2017, 7:53 AM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    char r1[20],r2[20],r3[20];        // Racers 1-3, their time
    int t1, t2, t3;
    
    //Input runner's 1-3 names and times
    cout<<"Enter runner name:  \n";
        cin>>r1;
    cout<<"Enter the time you finished the race: \n";
        cin>>t1;
    if(t1<0)
    {
        cout<<"Enter a positive number: \n";
        cin>>t1;
    }  
        
    // Runner 2    
     cout<<"Enter runner name:  \n";
        cin>>r2;
    cout<<"Enter the time you finished the race: \n";
        cin>>t2;
    if(t2<0)
    {
        cout<<"Enter a positive number: \n";
        cin>>t2;
    }         
    
    // Runner3      
    cout<<"Enter runner name:  \n";
        cin>>r3;
    cout<<"Enter the time you finished the race: \n";
        cin>>t3;
    if(t3<0)
    {
        cout<<"Enter a positive number: \n";
        cin>>t3;
    }         
        
    if(t1<t2)
    {
        if(t2<t3)
        cout<<"First: "<<r1<<"\nSecond: "<<r2<<"\nThird: "<<r3<<endl;
    }
    else 
    
        cout<<"First: "<<r3<<"\nSecond: "<<r2<<"\nThird: "<<r1<<endl;
        
 
        
   

    return 0;
}

