// class to store the details of a student using class
#include<iostream>
using namespace std;

class student
{
    public:         //access modifiers can be public|private|protected
        string name,address;
        int roll;
        int age;
        long phone;
};

int main()
{
    int n
    student Sam;
    cout<<"enter the age :";
    cin>>Sam.age;
    fflush(stdin);
    cout<<"\nEnter the name :";
    getline(cin,Sam.name);
    
    cout<<Sam.name<<endl;
    return 0;
}
