//member function
#include<iostream>
using namespace std;
// inline function to add two integers
inline int add(int a,int b)
{
	return a+b;
}
// overloaded inline function to add two doubles
inline double add(double a,double b)
{
	return a+b;
}
// overloaded inline function to add three integers
inline int add(int a,int b,int c)
{
	return a+b+c;
}
int main()
{
	cout<<"add(5,10)="<<add(5,10)<<endl; //calls int add(int,int)
	cout<<"add(2.5,3.7)="<<add(2.5,3.7)<<endl;//calls double add(double,double)
	cout<<"add(1,2,3)="<<add(1,2,3)<<endl;//calls int add(int,int,int)
}
