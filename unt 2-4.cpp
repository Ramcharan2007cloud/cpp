#include<iostream>
using namespace std;
class rectangle{
	private:
		int length;
		int width;
	public:
		rectangle()
		{
			length=0;
			width=0;
			cout<<"default constructor called"<<endl;
		}
		rectange(int 1)
		{
			length=1;
			width=1;
			cout<<"constructor with one parameter called"<<endl;
		}
		rectangle(int 1,int w)
		{
			length=1;
			wodth=w;
			cout<<"constructor with two parameters called"<<endl;
		}
		void display area()
		{
			cout<<"Area="<<(length*width)<<endl;
		}
};
int main()
{
	rectangle r1; //calls default constructor
	rectangle r2(5); //calls constructor with one parameter
	rectangle r3(4,6);//calls constructor with two parameters
	r1.display area();
	r2.display area();
	r3.display area();
}
