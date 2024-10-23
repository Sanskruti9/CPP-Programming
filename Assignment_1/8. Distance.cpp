#include<stdio.h>
#include<string.h>
struct Distance {
    int feet;
    float inches;
    
    //default constructor
    Distance()  {
    	printf("Default Constructor is called\n");
    	this->feet = 0;
    	this->inches = 0;
	}
	
	//para constructor
	Distance(int feet,float inches)  {
    	printf("Para Constructor is called\n");
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
	    printf("Distance: %d feet %.2f inches\n\n", this->feet, this->inches);	
    }
};

int main()  {
	Distance d1;
	Distance d2(5,8);
	
	//display
	d1.display();
	d2.display();
	
	//setters
	d1.setFeet(5);
	d1.setInches(3);
	/*
	d2.setFeet(5);
	d2.setInches(8);
	*/
	//display
	d1.display();
	d2.display();
	
	//getters
	printf("Distance: %d feet %.2f inches\n\n", d1.getFeet(), d1.getInches());
	printf("Distance: %d feet %.2f inches\n\n", d2.getFeet(), d2.getInches());
	
	return 0;
}