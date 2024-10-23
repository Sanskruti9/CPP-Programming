#include<iostream>
using namespace std;
class Shape {
	private:
	double Area;
	
	public:
	int calculateArea(int b,float h)  {
		this->Area = 0.5*b*h;
		return Area;
	}
	int calculateArea(int l,int b)  {
		this->Area = l*b;
		return Area;
	}
	float calculateArea(float r)  {
		this->Area = 3.14*r*r;
		return Area;
	}
};
int main()  {
	Shape sh;
	int s = 4;
	int l = 12, b = 8;
	float r = 5.8;
	float h = 6.5;
	
	cout<<"Area of Triangle = "<< sh.calculateArea(b,h)<<"\n";
	cout<<"Area of Rectangle = "<< sh.calculateArea(l,b)<<"\n";
	cout<<"Area of Circle = "<< sh.calculateArea(r)<<"\n";
	
	return 0;
}