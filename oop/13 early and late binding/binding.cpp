#include<iostream>
using namespace std;
//      BINDING : Binding refers to the process of converting identifiers (such as variable and performance names) into addresses
//      types of binding :-  
//      1.early binding  
//      2.late binding

class base
{
    public : 
    virtual int add(int a, int b)           // late binding       the compiler adds code that identifies the kind of object at runtime then matches the call with the right function definition         
    {
        return(a+b);
    }
    int multi(int a,int b)                   // early binding     any function call without virtual function is early binding  (compile time )
    {
        return(a*b);
    }                
                       
};
class child:public base
{
    public : 
    int add(int a, int b)                       
    {
        return(a+b+1);
    }
    int multi(int a, int b)                    
    {
        return(a*b*10);
    }
};
int main()
{   
    base *a;                // base class pointer holding the adderess of the child class
    child obj;
    a=&obj;                               
    cout<<obj.multi(2,5)<<endl;                                        
    cout<<obj.add(1,4);                
    return 0;
}