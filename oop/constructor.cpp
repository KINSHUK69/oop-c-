/*Task 2: Constructor in C++
WAP to create a class to print the area of a square and a rectangle. The 
class has two functions with the same name but different number of 
parameters. The function for printing the area of rectangle has two 
parameters which are its length and breadth respectively while the other 
function for printing the area of square has one parameter which is the 
side of the square. Use multiple constructors to for the initialization.*/


#include<iostream>
using namespace std;

class area 
{
    public:
        int s;
        int l,b;
        area(int x)               // constructor for square
        {
            s=x;    // set the value of x into s
        }  
        area(int x,int y)            // constructor for  rectangle     
        {
            l=x;    // set the value of x into l
            b=y;    // set the value of y into b
        }
        void displaysq()
        {
            cout<<"the area of square is "<<s*s<<endl;
        }
        void displayrect()
        {
            cout<<"the area of rectangle is "<<l*b<<endl;
        }
};

int main()
{
    int s,l,b; //
    cout<<"Enter the side : ";
    cin>>s;
    cout<<"Enter the length and breadth : ";
    cin>>l>>b;
    area square(s);
    area rect(l,b);
    square.displaysq();
    rect.displayrect();    
    return 0;
}
