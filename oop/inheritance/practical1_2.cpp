#include<iostream>
using namespace std;
class A
{
	public:
		int x;
		int y;
};
class B:public A
{
	public:
		void display()
		{
			x=30;
			y=20;
			cout<<"x="<<x<<endl<<"y="<<y<<endl;
		}
};
int main()
{
	B obj;
	obj.x;
	obj.y;
	obj.display();
}
