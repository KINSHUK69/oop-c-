#include<iostream>
using namespace std;

class A
{
	public:
		int x;
	private:
		int y; 	
	protected:
		int z;
};
class B:public A   
{
	public:
		void display()
		{
			x=10;
			//y=20;
			z=30;
			cout<<"x="<<x<<endl;			
			//cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;		
		}
};
int main()
{
	B obj;
	obj.display();
}
