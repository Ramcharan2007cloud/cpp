//multiple inheritance
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	public:
		void displayA()
		{
			cout<<"Class A"<<endl;
		}
};
class B
{
	public:
		void displayB()
		{
			cout<<"Class B"<<endl;
		}
};
class c:public A, public B
{
	public:
		void displayC()
		
		{
			cout<<"Class c"<<endl;
		}
};
int main()
{
	c obj;
	obj.displayA();
	obj.displayB();
	obj.displayC();
	return 0;
}
	
