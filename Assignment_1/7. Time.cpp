#include<stdio.h>
#include<string.h>
struct Time {
    int hr;
    int min;
    int sec;
    
    //default constructor
    Time()  {
    	printf("Default Constructor is called\n");
    	this->hr = 0;
    	this->min = 0;
		this->sec = 0;
	}
	//para constructor
	Time(int hr, int min, int sec)  {
    	printf("Para Constructor is called\n");
    	this->hr = hr;
    	this->min = min;
		this->sec = sec;
	}
	
	void setHour(int hr)  {
		this->hr = hr;
	}
	void setMinute(int min)  {
		this->min = min;
	}
	void setSecond(int sec)  {
		this->sec = sec;
	}
	
	int getHour()  {
		return this->hr;
	}
	int getMinute()  {
		return this->min;
	}
	int getSecond()  {
		return this->sec;
	}
	
    void display()  {
	    printf("Time: %02d:%02d:%02d\n\n", this->hr, this->min, this->sec);
    }
};

int main()  {
	Time t1;
	Time t2(3,48,26);
	
	//display
	t1.display();
	t2.display();
	
	//setters
	t1.setHour(2);
	t1.setMinute(40);
	t1.setSecond(56);
	/*
	t2.setHour(3);
	t2.setMinute(48);
	t2.setSecond(26);
	*/
	//display
	t1.display();
	t2.display();
	
	//getters
	printf("Time: %02d:%02d:%02d\n\n", t1.getHour(), t1.getMinute(), t1.getSecond());
	
	printf("Time: %02d:%02d:%02d\n\n", t2.getHour(), t2.getMinute(), t2.getSecond());
	
	
	return 0;
}