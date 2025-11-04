#include<iostream>
using namespace std;
class shape
{
	public:
		virtual void area()=0;
};
class circle:public shape
{
	float rad;
	public:
		circle(float r)
		{
			rad=r;
		}
		void area()
		{
			cout<<"the circle="<<3.14*rad*rad<<endl;
		}
};
class reactangle:public shape
{
	float len,bre;
	public:
		reactangle(float l,float b)
		{
			len=l;
			bre=b;
		}
		void area()
		{
			cout<<"lenght"<<len*bre<<endl;
		}
};
int main()
{
	shape *ptr;
	circle c1(4);
	ptr=&c1;
	ptr->area();
	reactangle d(4,5);
	ptr=&d;
	ptr->area();
	
}
