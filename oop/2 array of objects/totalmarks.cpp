
#include<iostream>
using namespace std;
int total;
class students 
{
    private :
    int age,marks,year;
    string name,section;

    public :
    void details()
    {
        cout<<"enter the name : ";
        fflush(stdin);
        getline(cin,name);
        cout<<"\nenter the age : ";
        cin>>age;
        cout<<"\nenter the year. : ";
        cin>>year;
        cout<<"\nenter the section : ";
        fflush(stdin);
        getline(cin,section);
        cout<<"\nehter the marks :";
        cin>>marks;
        fflush(stdin);
        total=total+marks;
    }
   
    void display()
    {
        cout<<"\nthe details are : "<<endl<<"name : "<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"year :"<<year<<endl;
        cout<<"section :"<<section<<endl;  

    }
    void display_total()
    {
        cout<<"\nthe total marks are : "<<total;

    }
};
int main()
{
    int n;
    cout<<"enter the no. of students : ";
    cin>>n;
    students a[n];    
    for(int i=0;i<n;i++)
    {
        a[i].details();        
    }
    for(int i=0;i<n;i++)
    {
        a[i].display();
        a[i].display_total();
    }
    
    
    return 0;
}
