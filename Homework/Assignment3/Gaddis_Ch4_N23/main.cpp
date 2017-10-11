/* 
 * File:   main.cpp
 * Author: Victor Ramirez
 * Purpose Geometry Calculator with menu
 * Created on September 30, 2017, 7:57 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char** argv) 
{
    int ch;                 //Choice
    int a, r, l, w, b, h;   //Area, radius, length, width, base, height
    const int pi=3.14159;
    const int cCh=1;        //Circle choice
    int rCh=2;              //Rectangle choice
    int tCh=3;              //Triangle choice
    int qCh;                //Quit

    cout<<"Welcome to the Geometry Calculator!\n";
    cout<<"Please choose a problem: \n";
    cout<<"1. Area of a circle\n";
    cout<<"2. Area of a rectangle\n";
    cout<<"3. Area of a triangle\n";
    cout<<"4. Quit\n";
        cin>>ch;
        cout<<fixed<<setprecision(2);
    switch(ch)
    {
        case 1:
            cout<<"Enter the radius of the circle: ";
            cin>>r;
            if(r<0)
            {
                cout<<"radius cannot be negative!\n"<<"Enter radius Again: \n";
                cin>>r;
            }
            a=pi*r*r;
            cout<<"The Circle's area is: "<<a<<" square units \n\n";
            break;
         
        case 2:
            cout<<"Enter the length of the rectangle: ";
            cin>>l;
            if(l<0)
            {
                cout<<"Length cannot be less than 0!\n"
                    <<"enter length again: \n";
                cin>>l;
            }
            cout<<"Enter the width of the rectangle: ";
            cin>>w;
            if(w<0)
            {
                cout<<"Width cannot be less than 0! \n"
                    <<"Enter width again: \n";
                cin>>w;
            }
            a=l*w;
            cout<<"The rectangle's area is: "<<a<<" square units\n";
            break;
            
        case 3:
            cout<<"Enter the base of the triangle: ";
            cin>>b;
            if(b<0)
            {
                cout<<"Base cannot be less than 0! \n"
                    <<"Enter base again: \n";
                cin>>b;
            }
            cout<<"Enter the height of the triangle: ";
            cin>>h;
            if(h<0)
            {
                cout<<"Height cannot bet less than 0! \n"
                    <<"Enter height again: \n";
                cin>>h;
            }
            a=b*h*0.5;
            cout<<"The triangle's area is: "<<a<<" square units \n";
            break;
        
        case 4:
            cout<<"The program is ending...\n\n\n";
            break;
            default:
                cout<<"The choice are 1-4 \n"<<"Run the program again\n";
                
            
           
                
            
    }
            
    
    return 0;
}

