#include<iostream>
#include<string.h>
using namespace std;
class ComplexNum {
	//private:
	int real;
	int img;
	
	public:
	//default constructor
	ComplexNum()  {
		cout<<"Default Constructor is called"<<"\n";
		this->real = 0;
		this->img = 0;
	}
	//parameterized constructor
	ComplexNum(int real,int img)  {
		cout<<"Para Constructor is called"<<"\n";
		this->real = real;
		this->img = img;
	}
	
	void setReal(int real)  {
		this->real = real;
	}
	void setImg(int img)  {
		this->img = img;
	}
	
	int getReal()  {
		return this->real;
	}
	int getImg()  {
		return this->img;
	}
	
	void display()  {
	    cout<<"Complex Number ="<< this->real <<"+"<< this->img<<"i"<<"\n\n";
    }
	//unary Operator
	//pre-increment
	ComplexNum operator++() {
		ComplexNum c;
	    c.real = ++this->real;
	    c.img = ++this->img;
		return c;
	}
	//post-increment
	ComplexNum operator++(int a) {
		ComplexNum c;
	    c.real = this->real++;
	    c.img = this->img++;
		return c;
	} 
	
	//pre-decrement
	ComplexNum operator--() {
		ComplexNum c;
	    c.real = --this->real;
	    c.img = --this->img;
		return c;
	}
	//post-decrement
	ComplexNum operator--(int a) {
		ComplexNum c;
	    c.real = this->real--;
	    c.img = this->img--;
		return c;
	} 	
};

class Distance {
    int feet;
    float inches;
    
    public:
    //default constructor
    Distance()  {
    	cout<<"Distance Default Constructor is called"<<"\n";
    	this->feet = 0;
    	this->inches = 0;
	}
	
	//para constructor
	Distance(int feet,float inches)  {
    	cout<<"Distance Para Constructor is called"<<"\n";
    	this->feet = feet;
    	this->inches = inches;	
	}
	
	void setFeet(int feet)  {
		this->feet = feet;
	}
	void setInches(float inches)  {
		this->inches = inches;
	}
	
	int getFeet()  {
		return this->feet;
	}
	float getInches()  {
		return this->inches;
	}
	
    void display()  {
	    cout<<"Distance: " << this->feet << " feet " << this->inches<<" inches "<< "\n\n";	
    }
    
    //unary Operator
	//pre-increment
	Distance operator++() {
		Distance d;
	    d.feet = ++this->feet;
	    d.inches = ++this->inches;
		return d;
	}
	//post-increment
	Distance operator++(int a) {
		Distance d;
	    d.feet = this->feet++;
	    d.inches = this->inches++;
		return d;
	} 
	
	//pre-decrement
	Distance operator--() {
		Distance d;
	    d.feet = --this->feet;
	    d.inches = --this->inches;
		return d;
	}
	//post-decrement
	Distance operator--(int a) {
		Distance d;
	    d.feet = this->feet--;
	    d.inches = this->inches--;
		return d;
	} 	
};


int main()  {
	cout<<"Unary Operator for Complex Number"<<"\n";
	ComplexNum c1(80,60),c2(40,20);
	
	//unary operator
	ComplexNum c3 = ++c1;
	ComplexNum c4 = c2++;
	ComplexNum c5 = --c1;
	ComplexNum c6 = c2--;
	
	//display
	printf("Increment: \n");
	c3.display();
	c4.display();
	printf("Decrement: \n");
	c5.display();
	c6.display();
	
	//getters
	cout<<"Using Getters"<<"\n";
	cout<<"Complex Number ="<< c1.getReal() <<"+"<< c1.getImg() <<"i"<<"\n\n";
	cout<<"Complex Number ="<< c2.getReal() <<"+"<< c2.getImg() <<"i"<<"\n\n";
	cout<<"Complex Number ="<< c3.getReal() <<"+"<< c3.getImg() <<"i"<<"\n\n";
	cout<<"Complex Number ="<< c4.getReal() <<"+"<< c4.getImg() <<"i"<<"\n\n";
	cout<<"Complex Number ="<< c5.getReal() <<"+"<< c5.getImg() <<"i"<<"\n\n";
	cout<<"Complex Number ="<< c6.getReal() <<"+"<< c6.getImg() <<"i"<<"\n\n";
	
	cout<<"Unary Operator for distance"<<"\n\n";
	Distance d1(5,7),d2(10,12);
	
	//unary operator
	Distance d3 = ++d1;
	Distance d4 = d2++;
	Distance d5 = --d1;
	Distance d6 = d2--;
	
	//display
	printf("Increment: \n");
	d3.display();
	d4.display();
	printf("Decrement: \n");
	d5.display();
	d6.display();
	
	//getters
	cout<<"Using Getters"<<"\n";
	cout<<"Distance =" << d1.getFeet() << " feet " << d1.getInches() <<" inches "<< "\n\n";	
	cout<<"Distance =" << d2.getFeet() << " feet " << d2.getInches() <<" inches "<< "\n\n";	
	cout<<"Distance =" << d3.getFeet() << " feet " << d3.getInches() <<" inches "<< "\n\n";	
	cout<<"Distance =" << d4.getFeet() << " feet " << d4.getInches() <<" inches "<< "\n\n";	
	cout<<"Distance =" << d5.getFeet() << " feet " << d5.getInches() <<" inches "<< "\n\n";	
	cout<<"Distance =" << d6.getFeet() << " feet " << d6.getInches() <<" inches "<< "\n\n";	
	
	return 0;
}