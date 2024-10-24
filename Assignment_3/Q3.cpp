#include<iostream>
#include<string.h>
using namespace std;
class ComplexNum {
	private:
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
    
    //logical operators
    int operator&&(ComplexNum c)  {
    	if((this->real != 0 && this->img != 0) && (c.real != 0 && c.img != 0))
    	   return 1;
    	else 
    	   return 0;
	}
	
	int operator||(ComplexNum c)  {
    	if((this->real != 0 || this->img != 0) || (c.real != 0 || c.img != 0))
    	   return 1;
    	else 
    	   return 0;
	}	
};

class Distance {
	private:
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
    
    //logical operators
    int operator&&(Distance d)  {
    	if((this->feet != 0 && this->inches != 0) && (d.feet != 0 && d.inches != 0))
    	   return 1;
    	else 
    	   return 0;
	}

	int operator||(Distance d)  {
    	if((this->feet != 0 || this->inches != 0) || (d.feet != 0 || d.inches != 0))
    	   return 1;
    	else 
    	   return 0;
	}
};

int main()  {
	cout<<"Logical Operator for Complex Number"<<"\n";
	ComplexNum c1(80,60),c3(10,20);
	ComplexNum c2;
	int result;
	
	//display
	c1.display();
	c2.display();
	c3.display();
	
	result = c1.operator&&(c3);
	cout<< "Result of c1 && c3 = "<< result <<endl;
	
	result = c1.operator||(c2);
	cout<< "Result of c1 || c2 = "<< result <<"\n\n";
	
	//getters
	cout<<"Using Getters"<<"\n";
	cout<<"Complex Number ="<< c1.getReal() <<"+"<< c1.getImg() <<"i"<<"\n\n";
	cout<<"Complex Number ="<< c2.getReal() <<"+"<< c2.getImg() <<"i"<<"\n\n";
	cout<<"Complex Number ="<< c3.getReal() <<"+"<< c3.getImg() <<"i"<<"\n\n";
	
	cout<<"Logical Operator for distance"<<"\n\n";
	Distance d1(5,7);
	Distance d2;
	Distance d3(10,12);
	
	//display
	d1.display();
	d2.display();
	d3.display();
	
	result = d1.operator&&(d3);
	cout<< "Result of d1 && d3 = "<< result <<endl;
	
	result = d1.operator||(d2);
	cout<< "Result of d1 || d2 = "<< result <<"\n\n";
	
	//getters
	cout<<"Using Getters"<<"\n";
	cout<<"Distance =" << d1.getFeet() << " feet " << d1.getInches() <<" inches "<< "\n\n";	
	cout<<"Distance =" << d2.getFeet() << " feet " << d2.getInches() <<" inches "<< "\n\n";	
	cout<<"Distance =" << d3.getFeet() << " feet " << d3.getInches() <<" inches "<< "\n\n";	
	
	return 0;
}