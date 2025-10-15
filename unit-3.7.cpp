//implement pure virtyal function and clalculate the area of different shapes buy using abstract class.
#include<iostream>
#include<cmath>
using namespace std;
class shape{
	public:
		virtual float area()=0;
};
class rectangle:public shape{
	private:
		float length,breadth;
		public:
			rectangle (float l,float b){
				length=1;
				breadth=b;
			}
			float area() override{
				return length*breadth;
			}
};
class circle:public shape{
	private:
		float radius;
	public:
		circle(float r){
			radius=r;
		}
		float area() override{
		return M_PI*radius*radius;
		}
};
class triangle:public shape{
	private:
		float base,height;
	public:
		triangle(float b,float h){
			base=b;
			height=h;
		}
		float area()override{
		return 0.5*base*height;
		}
};
int main()
{
	shape*shape;
	rectangle rect(10,5);
	circle circ(7);
	triangle tri(8,6);
	shape=&rect;
	cout<<"area of rectangle:"<<shape->area()<<endl;
	shape=&circ;
	cout<<"area of circle:"<<shape->area()<<endl;
	shape=&tri;
	cout<<"area of triangle:"<<shape->area()<<endl;
	return 0;
}
