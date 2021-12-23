#include<iostream>
using namespace std;
class base
{
    public : 
    int add(int a, int b)               //over-loaded method            its also a over hided method bescause its being hided by the add of the child class
    {
        return(a+b);
    }
     
    float add(float a, float b)             //over-loading method
    {
        return(a+b);
    }
};
class child:public base
{
    public : 
    int add(int a, int b)               //over-riding method of int add function of base class         this is also a over hideding method as its hiding the add of the base class 
    {
        return(a+b+1);
    }
    
};
int main()
{   
    base obj1;
    child obj;
    cout<<obj1.add(4,5)<<" using base class object"<<endl;
    cout<<obj1.add(4.5f,5.5f)<<" using base class object"<<endl;         // over loading
    cout<<obj.add(4,5)<<" using child class object"<<endl;           // over riding 
    cout<<obj.add(5.9f,5.9f)<<" using child class object "<<endl;                 // over-riding type cast the value into integers        

    return 0;
}