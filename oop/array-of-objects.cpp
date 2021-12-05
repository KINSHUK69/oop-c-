#include<iostream>
using namespace std;

class student       // class of name student
{
    public:
        string name,address;            // data members
        int roll;
        int age;
        long phone;
};

int main()
{
    int n;
    cout<<"Enter the number of students : ";
    cin>>n;
    student arr[n];             // array of objects
    for(int i=0;i<n;i++)
    {
        fflush(stdin);
        cout<<"Enter the name :";
        getline(cin,arr[i].name);
        cout<<"Enter age : ";
        cin>>arr[i].age;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Name : "<<arr[i].name<<"  Age : "<<arr[i].age<<endl;
    }
    return 0;
}
