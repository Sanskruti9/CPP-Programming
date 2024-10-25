#include<iostream>
using namespace std;
class Shape {
	private:
	double area;
	
	public:
	Shape()  {
		this->area = 0;
	}
	Shape(double area)  {
		this->area = area;
	}
	void setArea(double area)  {
		this->area = area;
	}
	double getArea()  {
		return this->area;
	}
	void display()  {
		cout<<"Area = "<< this->area <<"\n";
	}
	virtual float calArea()  {
		return this->area;
	}
};

class Triangle : public Shape  {
    private:
	int base;
	int height;
	
	public:
	Triangle()  {
		this->base = 0;
		this->height = 0;
	}
	Triangle(int b, int h)  {
		this->base = b;
		this->height = h;
	}
	
	void setBase(int base)  {
		this->base = base;
	}
	void setHeight(int height)  {
		this->height = height;
	}
	int getBase()  {
		return this->base;
	}
	int getHeight()  {
		return this->height;
	}
	void display() {
		cout<<"Triangle\n";
		cout<<"Base = "<< this->base<<"\n";
		cout<<"Height = "<< this->height<<"\n\n";
	}
	float calArea()  {
		float area = 0.5*this->base*this->height;
		return area;
	}
};
class Circle : public Shape {
	private:
	float radius;
	
	public:
	Circle()  {
		this->radius = 0;
	}
	Circle(float r)  {
		this->radius = r;
	}
	
	void setRadius(float r)  {
		this->radius = r;
	}
	float getRadius()  {
		return this->radius;
	}
	
	void display() {
		cout<<"Circle\n";
		cout<<"Radius = "<< this->radius <<"\n\n";
	}
	
	float calArea()  {
		float area = 3.14*this->radius*this->radius;
		return area;
	}
	
};
class Rectangle:public Shape {
	private:
	int length;
	int breadth;
	
	public:
	Rectangle()  {
		this->length = 0;
		this->breadth = 0;
	}
	Rectangle(int l, int b)  {
		this->length = l;
		this->breadth = b;
	}
	
	void setLength(int length)  {
		this->length = length;
	}
	void setBreadth(int breadth)  {
		this->breadth = breadth;
	}
	int getLength()  {
		return this->length;
	}
	int getBreadth()  {
		return this->breadth;
	}
	void display() {
		cout<<"Rectangle\n";
		cout<<"Length = "<< this->length<<"\n";
		cout<<"Breadth = "<< this->breadth<<"\n\n";
	}
	float calArea()  {
		float area = this->length*this->breadth;
		return area;
	}	
};
int main()  {
	Shape* s;

	Triangle t1(5,8);
	Circle c1(10.5);
	Rectangle r1(5,9);
	
	t1.display();
	c1.display();
	r1.display();
	
	s = &t1;
	cout<< "Area of Triangle = "<< s->calArea() <<endl<<endl;
	
	s = &c1;
	cout<< "Area of Circle = "<< s->calArea() <<endl<<endl;
	
	s = &r1;
	cout<< "Area of Rectangle = "<< s->calArea() <<endl<<endl;
	
	return 0;
}