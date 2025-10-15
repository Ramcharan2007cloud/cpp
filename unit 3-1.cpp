//overload unary and binary operators using members function.
#include<iostream>
using namespace std;
class number {
	private:
		int value;
		public:
		//constructor
		number(int v=0)
		{
			value=v;
		}
		// unary minus operator overloading (member function)
		number operator-()
		{
			return number(-value);
		}
		//binary plus operator 
		number operator+(const number & obj)
		{
			return number(value+obj.value);
		}
		// display function
		void display()
		{
			cout<<"value="<<value<<endl;
		}
};
int main()
{
	number n1(10),n2(20),result;
	cout<<"Original values:"<<endl;
	n1.display();
	n2.display();
	// binary operator(+)
	result=n1+n2;
	cout<<"After binary+operator (n1+n2):"<<endl;
	result.display();
	// unary operator(-)
	result=-n1;
	cout<<"after unary-operator(-n1):"<<endl;
	result.display();
	return 0;
}
