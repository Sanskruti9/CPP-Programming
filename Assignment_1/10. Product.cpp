#include<stdio.h>
#include<string.h>
struct Product {
	int id;
	char name[20];
	int quantity;
	double price;
	
	//default constructor
	Product()  {
    	printf("Default Constructor is called\n");
    	this->id = 0;
    	strcpy(this->name, "Not Given");
    	this->quantity = 0;
    	this->price = 0;
	}
	
	//parameterized constructor
	Product(int id,char* name,int quantity,double price)  {
    	printf("Para Constructor is called\n");
    	this->id = id;
    	strcpy(this->name, name);
    	this->quantity = quantity;
    	this->price = price;
	}
	
	void setId(int id)  {
		this->id = id;
	}
	void setName(char* name)  {
		strcpy(this->name, name);
	}
	void setQuantity(int q)  {
		this->quantity = q;
	}
	void setPrice(double price)  {
		this->price = price;
	}
	
	int getId()  {
		return this->id;
	}
	char* getName()  {
		return this->name;
	}
	int getQuantity()  {
		return this->quantity;
	}
	double getPrice()  {
		return this->price;
	}
 	
	void display()  {
	   printf("Id = %d\n",this->id);
	   printf("Name = %s\n",this->name);
	   printf("Quantity = %d\n",this->quantity);
	   printf("Price = %lf\n\n",this->price);
    }
};

int main()  {
	Product p1;
	Product p2(7,"Notebook",120,80);
	
	//display
	p1.display();
	p2.display();
	
	//setter
	p1.setId(1);
	p1.setName("Pen");
	p1.setQuantity(20);
	p1.setPrice(500);
	/*
	p2.setId(7);
	p2.setName("NoteBook");
	p2.setQuantity(120);
	p2.setPrice(80);
	*/
	//display
	p1.display();
	p2.display();
	
	//getter
	printf("ID = %d\n",p1.getId());
	printf("Name = %s\n",p1.getName());
	printf("Quantity = %d\n",p1.getQuantity());
	printf("Price = %.2lf\n\n",p1.getPrice());
	
	printf("ID = %d\n",p2.getId());
	printf("Name = %s\n",p2.getName());
	printf("Quantity = %d\n",p2.getQuantity());
	printf("Price = %.2lf\n\n",p2.getPrice());
	
	return 0;
}