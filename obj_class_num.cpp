// object as a class member
#include<iostream>
using namespace std;
class apple
{
	public:
		int x;
		apple()
		{
			x=20;
			cout<<"\n In apple construcctor";
		}
};
class ball
{
	public:
		int y;
		apple a;
		ball()
		{
			cout<<"\n In ball constructor";
		}
		void show()
		{
			cout<<"\nX="<<a.x<<"\tY="<<y;
		}
};
int main()
{
	ball b;
	b.show();
	return 0;
}
