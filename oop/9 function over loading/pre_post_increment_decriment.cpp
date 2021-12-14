#include<iostream>
using namespace std;
class abc
{
    private :
    int a;
    public :
    abc()
    {
        a=0;
    }
    abc(int a)
    {
        this->a=a;
    }
    abc operator ++()            // pre increment 
    {
        return ++a;
    }
    abc operator ++(int)        // post increment 
    {
        return a++;
    }
    abc operator --()            // pre decrement 
    {
        return --a;
    }
    abc operator --(int)        // post decrement 
    {
        return a--;
    }
    void display()
    {
        cout<<a<<endl;
    }

};
int main()
{
    abc a(10);
    a++;
    a.display();
    ++a;
    a.display();
    a--;
    a.display();
    --a;
    a.display();
    return 0;
}