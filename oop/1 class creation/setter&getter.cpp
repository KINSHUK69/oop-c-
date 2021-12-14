
#include<iostream>
using namespace std;
class students 
{
    private :
    int roll,phone;
    string name,adderess;

    public :
    void details()    // setter
    {
        cout<<"enter the name : ";
        fflush(stdin);
        getline(cin,name);
        cout<<"\nenter the roll no. : ";
        cin>>roll;
        cout<<"\nenter the phone no. : ";
        cin>>phone;
        cout<<"\nenter the addersss : ";
        fflush(stdin);
        getline(cin,adderess);
    }
    void display()   // getter
    {
        cout<<"the details are : "<<"name : \n"<<name<<endl;
        cout<<"phone no. :"<<phone<<endl;
        cout<<"roll no. :"<<roll<<endl;
        cout<<"adderess :"<<phone<<endl;      

    }
};
int main()
{
    students sam,john;
    sam.details();
    john.details();
    sam.display();
    john.display();
    return 0;
}
