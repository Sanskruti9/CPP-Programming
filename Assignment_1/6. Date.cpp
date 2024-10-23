#include<stdio.h>
#include<string.h>
struct Date {
	int date;
	int month;
	int year;
	
	//default constructor
	Date()  {
		printf("Default Constructor is called\n");
		this->date = 0;
		this->month = 0;
		this->year = 0;
	}
	//para constructor
	Date(int d,int m,int y)  {
		printf("Para Constructor is called\n");
		this->date = d;
		this->month = m;
		this->year = y;
	}
	void setDate(int date)  {
		this->date = date;
	}
	void setMonth(int month)  {
		this->month = month;
	}
	void setYear(int year)  {
		this->year = year;
	}
	int getDate()  {
		return this->date;
	}
	int getMonth()  {
		return this->month;
	}
	int getYear()  {
		return this->year;
	}
	void display()  {
	      printf("Date = %02d/%02d/%d\n\n", this->date, this->month, this->year);
    }
};

int main()  {
	Date d1;
	Date d2(12,5,1997);
	
	//display
	d1.display();
	d2.display();
	
	//setters
	d1.setDate(23);
	d1.setMonth(4);
	d1.setYear(2002);
	/*
	d2.setDate(23);
	d2.setMonth(5);
	d2.setYear(1967);
	*/
	
	//display
	d1.display();
	d2.display();
	
	//getter
	printf("Date = %02d/%02d/%d\n\n", d1.getDate(), d1.getMonth(), d1.getYear());
	printf("Date = %02d/%02d/%d\n\n", d2.getDate(), d2.getMonth(), d2.getYear());
	
	return 0;
}