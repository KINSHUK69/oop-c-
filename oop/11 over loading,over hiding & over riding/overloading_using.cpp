#include<iostream>
using namespace std;
class base
{
    public : 
    int add(int a,int b)               //overloaded method
    {
        return(a+b);
    }
     
    float add(float a,float b)             //overloading method
    {
        return(a+b);
    }
};
class child:public base
{
    using base :: add;
    public : 
    int add(int a, int b)               //over riding of int add function of base class
    {
        return(a+b+1);
    }
    
   // float add(float a, float b)             //overloading method
   // {
   //     return(a+b+1);
   // }
    
};
int main()
{   
    // base obj1;
    child obj;
   // cout<<obj1.add(4,5)<<endl;
   // cout<<obj1.add(4.5f,5.5f)<<endl;         // over loading
    cout<<obj.add(4,5)<<endl;                  // over riding 
    cout<<obj.add(5.5f,5.4f)<<endl;            // over-riding type cast the value into integers     // error: 'float base::add(float, float)' is inaccessible within this context   

    return 0;
}