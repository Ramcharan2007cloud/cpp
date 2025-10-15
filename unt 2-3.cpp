#include<iostream>
using namespace std;
class student
{
	private:
		string name;
		int roll;
		public:
			// constructor
			student(string n,int r)
			{
				name =n;
				roll=r;
				cout<<"constructor called for"<<name<<endl;
			}
			// member function to display student details
			void display()
			{
				cout<<"Name:"<<name<<",roll:"<<roll<<endl;
			}
			// destructor
			~student()
			{
				cout<<"destructor called for"<<name<<endl;
			}		
};
int main()
{
	student s1("Alice",101);
	//constructor is called 
	student s2("Bob",102);
	//constructor is called 
	s1.display();
	s2.display();
	// when main() ends,destructor are automatically
	return 0;
}
