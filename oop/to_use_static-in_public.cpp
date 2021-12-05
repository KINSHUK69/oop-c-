#include<iostream>
using namespace std;
class Member
{

	public:
        static int a;
        Member()
        {
            a++;
        }
		void name()
		{
		                                      // it will be initialized zero only for the first time a=0;
			//a++;
			//cout<<"count for object is : "<<a<<endl;
		}
        void display()
        {
            cout<<a<<endl;
        }
};
int Member::a=0;
int main()
{	
	Member a,b,c,d;
	/*cout<<"object 'a' ";
	a.name();
	cout<<"object 'b' ";
	b.name();
	cout<<"object 'c' ";
	c.name();*/
    c.display();
	return 0;
}