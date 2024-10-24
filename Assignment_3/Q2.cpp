#include <iostream>
using namespace std;
class Distance {
	//private:
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
    
    Distance add(Distance d)  {
    	Distance temp;
    	temp.feet = this->feet + (d.getFeet());
    	temp.inches = this->inches +(d.getInches());
    	return temp;
    }
    
    Distance add(int a)  {
    	Distance temp;
    	temp.feet = a + this->feet;
    	temp.inches = a + this->inches;
    	return temp;
    }
    
};
Distance add(int a,Distance d)  {
    	Distance temp;
    	
    	temp.setFeet(a+d.getFeet());
    	temp.setInches(a+d.getInches());
    	
    	//temp.getFeet();
    	//temp.getInches();
    	
    	return temp;
}

int main()  {
	Distance d1(5,7),d2(10,12);
	int a = 10;
	
	//Addition
	Distance d3 = d1.add(d2);
	Distance d4 = d1.add(a);
	Distance d5 = add(a,d2);
	
	//display
	d3.display();
	d4.display();
	d5.display();
	
	//getters
	cout<<"Using Getters"<<"\n";
	cout<<"Distance =" << d1.getFeet() << " feet " << d1.getInches() <<" inches "<< "\n\n";	
	cout<<"Distance =" << d2.getFeet() << " feet " << d2.getInches() <<" inches "<< "\n\n";	
	cout<<"Distance =" << d3.getFeet() << " feet " << d3.getInches() <<" inches "<< "\n\n";	
	cout<<"Distance =" << d4.getFeet() << " feet " << d4.getInches() <<" inches "<< "\n\n";	
	cout<<"Distance =" << d5.getFeet() << " feet " << d5.getInches() <<" inches "<< "\n\n";	
	
	return 0;
}