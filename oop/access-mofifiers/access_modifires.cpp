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
class B:public A // do from all accesss modifires i.e. private and protected
{
	public:
		void display()
		{
			x=10;
			y=20;
			z=30;
			cout<<"x="<<x<<endl;			
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;		
		}
};
int main()
{
	B obj;
	obj.x=10;
	obj.y=20;
	obj.z=30;
	obj.display();
}
