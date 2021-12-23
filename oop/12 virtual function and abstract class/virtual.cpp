#include<iostream>
using namespace std;
class base
{
    public : 
    virtual int add(int a, int b)               //overloaded method
    {
        return(a+b);
    }
    virtual int multi(int a,int b)=0;           // to create pure virtual function
    int sub(int a,int b);                       // will no show error as abstraction is not invoked and is only invoked when it's a pure virtual function 
};
class child:public base
{
    public : 
    int add(int a, int b)                  //over riding of int add function of base class
    {
        return(a+b+1);
    }
     int multi(int a, int b)                       //over riding of int add function of base class
    {
        return(a*b);
    }
};
int main()
{   
    base *a;                            
    child obj;
    a=&obj;                             // due to abstraction compiler won't bind it at run time  
    cout<<a->multi(2,3)<<endl;          // during runtime this definition will be followed  
                                        // overr iding type cast the value into integers      
    cout<<a->add(1,3);                  // due to virtual keyword it will be followed at runtime and compiler will ignore it during compile time
    return 0;
}