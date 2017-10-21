/* 
 * File:   main.cpp
 * Author: Victor Ramirez
 *
 * Created on October 17, 2017, 11:20 AM
 */

#include <iostream>
#include <cmath>        //case 6
#include <iomanip>
#include <fstream>
#include <cstring>

using namespace std;


int main(int argc, char** argv) 
{
    int choice;
    
    //loop the Menu and problems
    do
    {
        
        //Input Data/Variables
        cout<<"Choose from the Menu\n";
        cout<<"1. Problem 1 \n";
        cout<<"2. Problem 2 \n";
        cout<<"3. Problem 3 \n";
        cout<<"4. Problem 4 \n";
        cout<<"5. Problem 5 \n";
        cout<<"6. Problem 6 \n";
        cout<<"7. Problem 7 \n";
        cout<<"8. Problem 8 \n";
        cout<<"9. Problem 9 \n";
        cin>>choice;
        
        //Process input to the outputs
          switch(choice){
  //CASE ONE          
              case 1:
              {
              cout<<"\nYou are in problem 1 \n";
                        
              
    //Declare and initialize variables
    int pInt;       //Positive integer
    int num;
    int i=0;
    
    //Prompts the user to enter a positive integer value
    cout<<"Gaddis. Chapter 5, Number 1\n\n\n";
    cout<<"Please enter a positive integer value: \n";
    cin>>num;
    
    //ensure value is positive
    while(num<0)
    {
    cout<<"Please enter a positive integer value: \n\n";
    cin>>num;
    }

    //for loop used to get the sum of all the integers 
   
    
    int sum;
    
    for (int i=0; i<=num; i++)
    {
        sum+=i;
        
    }
    
    //display output    
    cout<<"The sum of all the integers from 1 up to "<<num<<" is: "<<sum<<endl;
              
                                                        
              break;
              }
                            
  //CASE TWO  
              
              case 2:
              {
              cout<<"\nYou are in problem 2 \n\n";
              cout<<"Gaddis. Chapter 5 Number 3\n\n\n";
                      
        //Declare & Initialize Variables
    int level=0;
    int year=1;
    float mm=1.5;        // 1.5 millimeters 
  
    //Welcomes user to program
    cout<<"--------------------------------------------------------------\n";
    cout<<"      Millimeters Risen for the next 25 years             ";
    cout<<"\n--------------------------------------------------------------\n";
        
    
    //Utilize loop to validate years are <= 25
        while(year<=25)
    {
        level+=mm;
       
        cout<<"year   "<<year<<":\t"<<level*mm<<" millimeters\n";
        year++;                                                        
    }
    cout<<"---------------------------------------------------------------";       
              
                      
              break;
              }
                           
  //CASE THREE
              
              case 3:
              {
              cout<<"\nYou are in problem 3 \n";
              cout<<"Gaddis. Chapter 5 Number 4\n\n\n";
              
              
              
                  //Initialize Variables
    int cal=3.6;
    
    cout<<"----------------------------------------------------------\n";
    //Loop 
    for (int min=10;min<=30;min+=5)
    {
        int burnt=3.6*min;
        
        //Display outputs
        cout<<"Calories burnt in "<<min<<" minutes: "<<burnt<<endl;        
    }
   cout<<"----------------------------------------------------------";                                        
              break;
              }
              
  //CASE FOUR 
              
              case 4:
              {
              cout<<"\nYou are in problem 4 \n";
              
              cout<<"Gaddis. Chapter 5 Number 6\n\n\n";
    
    //Declare & Initialize variables
    float speed, time;
    int dTr=0;      //Distance traveled
    
    //Prompts user to enter speed & time
    cout<<"Enter the vehicle's speed in miles per hour: \n";
        cin>>speed;
    
    cout<<"Enter the hours traveled in the vehicle: \n";
        cin>>time;
        
    //If statement for speed & time to validate values
    if(speed>=0 && time>=1)
    {

   //Display output
   cout<<"\nHours Distance Traveled: \n";
   cout<<"---------------------------------------------------------\n";
    }
        
   for(int i=1;i<=time;i++)
   {
       cout<<" "<<i<<"\t\t"<<speed*i<<endl;
   }
        
              break;
              }
              
  //CASE FIVE  
              
              case 5:
              {
              cout<<"\nYou are in problem 5 \n";
              
              cout<<"Gaddis. Chapter 5 Number 7\n\n\n";
              
              
    //Declare & Initialize variables
    int days=1;
    float money=1.0;
    float total=0;
    float paid=0.0;
    
    //Display border and prompt user to enter number of days
    cout<<"--------------------------------------------------\n";    
    cout<<"Enter the number of days\n";
    cin>>days;
    
    //Loops to validate correct number of days
    while(days<1)
    {
        cout<<"Please enter correct number days\n";
        cin>>days;
    }
    
    //second loop to calculate earnings 
    for(int i=1;i<=days;i++)
    {
        paid=1.0/100;
        cout<<"Day "<<i<<" you earned: $"<<paid<<endl;
        total+=paid;
        money +=2;
        
    }
    cout<<"\nTotal earning are: $"<<total<<endl;
    cout<<"--------------------------------------------------";
                         
              break;
              }
              
  //CASE SIX   
              
              case 6:
              {
              cout<<"\nYou are in problem 6 \n";
              cout<<"Gaddis. Chapter 5 Number 11\n\n\n";
              
                  float pop, incPop, popPow;
    int nYears;
    
    //Input data/Variables
    cout<<"calculate the increase in population over time\n";
    cout<<"Input the population percentage yearly increase and the "<<
            "number of years\n";
    cin>>pop>>incPop>>nYears;
    
    //Float or map the inputs to outputs
    float temp=(1+incPop/100.0f);
    popPow=pop*pow(temp,nYears);
    for(int year=1;year<=nYears;year++)
    {
        pop*=temp;
    }
    
    //Display/Output all
    cout<<"The resulting population in "<<nYears<<" years = "<<pop<<
            " people using a loop"<<endl;
    cout<<"  Same result population in "<<nYears<<" years = "<<popPow<<
            " people using the pow()"<<endl;
              
              
              break;
              }
              
              
  //CASE SEVEN  
              
              case 7:
              {
              cout<<"\nYou are in problem 7 \n";
              cout<<"Gaddis. Chapter 5 Number 22\n\n\n";
              
              
              int sideS=0;
    cout<<"-------------------------------------------------------\n";
    cout<<"Enter a number from 1 to 15\n";
    cin>>sideS;
    
    cout<<"-------------------------------------------------------\n";
    //loop for rows
    for(int r=1;r<=sideS;r++)
    {
        //loops for columns
       
        for (int c=1;c<=sideS;c++)
        {
            cout<<"X";
        }
    
        cout<<endl;
    }
    cout<<"-------------------------------------------------------";              
              break;
              }
              
  //CASE EIGHT  
              
              case 8:
              {
              cout<<"\nYou are in problem 1 \n";
              cout<<"Gaddis. Chapter 5 Number 23\n\n\n";
              
                  //Display/Output all pertinent variables
    for(int cnt1=1,cnt2=19,cnt3=10;cnt1<=10;cnt1++,cnt2--,cnt3--)
    {
        //Display first triangle
        for(int t1=1;t1<=cnt1;t1++)cout<<"*";
       
        //Display middle spaces
        for(int t1=1;t1<=cnt2;t1++)cout<<" ";
        
        //Display last triangle
        for(int t1=1;t1<=cnt3;t1++)cout<<"*";
        cout<<endl;               
    }                           
              break;
              }
             
  //CASE NINE  
              
              case 9:
              {
              cout<<"\nYou are in problem 9 \n";
              cout<<"Gaddis. Chapter 5 Number 20\n\n\n";
                      
                      
    int x;
    unsigned int num;
    num=1+rand() % 100;
    
    cout<<"Guessing number between 100\n";
    do
    {
        cin>>x;
        if(x<num)
            cout<<"Too low. Try again!";
        if(x>num)
            cout<<"Too high. Try again!";
        if(x==num)
        {
            cout<<"You guessed correctly! YOU WIN!\n";
            break;
        }
    }
    while (x!=num);
    
                      
              break;
              }
          }     
        
    }
    
    while(choice<0&&choice<10);
    
    return 0;
}

