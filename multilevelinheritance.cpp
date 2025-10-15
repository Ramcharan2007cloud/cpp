#include<iostream>
using namespace std;
class vehicle
{
	public:
		void move()
		{
			cout<<"vehicle is moving"<<endl;
		}
};
class car:public vehicle
{
	public:
		void start()
		{
			cout<<"Car started"<<endl;
		}
};
class sportscar:public car
{
	public:
		void turbo()
		{
			cout<<"sportscar in turbo mode!"<<endl;
		}
};
int main()
{
	sportscar A;
	A.move();
	A.start();
	A.turbo();
	return 0;
}
