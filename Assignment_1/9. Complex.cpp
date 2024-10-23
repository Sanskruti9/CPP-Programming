#include<stdio.h>
#include<string.h>
struct ComplexNum {
	int real;
	int img;
	
	//default constructor
	ComplexNum()  {
		printf("Default Constructor is called\n");
		this->real = 0;
		this->img = 0;
	}
	//parameterized constructor
	ComplexNum(int real,int img)  {
		printf("Para Constructor is called\n");
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
	    printf("Complex Number = %d + %di\n",this->real, this->img);
	    printf("\n");
    }
    
    ComplexNum add(ComplexNum c)  {
    	ComplexNum temp;
    	temp.real = (this->real + c.getReal());
    	temp.img = (this->img + c.getImg());
    	return temp;
    } 
};

ComplexNum add(ComplexNum c1,ComplexNum c2)  {
    	ComplexNum temp;
    	temp.real = (c1.getReal() + c2.getReal());
    	temp.img = (c1.getImg() + c2.getImg());
    	return temp;
}

int main()  {
	ComplexNum c1;
	ComplexNum c2(10,20);
	
	ComplexNum c3 = add(c1,c2);
	ComplexNum c4 = c1.add(c2);
	
	//display
	c1.display();
	c2.display();
	c3.display();
	c4.display();
	
	//setters
	c1.setReal(20);
	c1.setImg(60);
	/*
	c2.setReal(7);
	c2.setImg(9);
	*/
	
	//display
	c1.display();
	c2.display();
	c3.display();
	c4.display();
	
	//getters
	printf("Complex Number = %d + %di\n\n",c1.getReal(), c1.getImg());
	printf("Complex Number = %d + %di\n\n",c2.getReal(), c2.getImg());
	printf("Complex Number = %d + %di\n\n",c3.getReal(), c3.getImg());
	printf("Complex Number = %d + %di\n\n",c4.getReal(), c4.getImg());
	
	return 0;
}