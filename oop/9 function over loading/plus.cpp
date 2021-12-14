#include<iostream>
using namespace std;

class complex
{
    private :
    int real,imag;
    public :
    complex()                                   // default constructor
    {
        real=0;imag=0;
    }
    complex (int real,int imag)                 // constructor
    {
        this->real=real;
        this->imag=imag;
    }
    complex operator + (complex x)              // + operator overloading
    {
        complex temp;
        temp.real=real+x.real;
        temp.imag=imag+x.imag;
        return temp;
    }
    void display()
    {
        cout<<real<<" + "<<imag<<" i"<<endl;
    }
};
int main()
{
    complex a(10,20);
    complex b(20,10);
    complex c(2,3);
    complex d;
    d=a+b+c;
    d.display();
    return 0;
}
