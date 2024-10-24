#include<iostream>
using namespace std;
class ComplexNum {
	private:
	int real;
	int img;
	
	public:
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
    //c1.add(c2)   --->addition of 2 complex numbers
    ComplexNum operator+(ComplexNum c)  {
    	ComplexNum temp;
    	temp.real = (this->real + c.getReal());
    	temp.img = (this->img + c.getImg());
    	return temp;
    }
    
    //add(int)  --->addition of 1 complex no and 1 integer
    ComplexNum operator+(int a)  {
    	ComplexNum temp;
    	temp.real = this->getReal() + a;
    	temp.img = this->getImg() + a;
    	return temp;
    } 
    
    //subtract
    ComplexNum operator-(ComplexNum c)  {
    	ComplexNum temp;
    	temp.real = (this->real - c.getReal());
    	temp.img = (this->img - c.getImg());
    	return temp;
    }
    
    ComplexNum operator-(int a)  {
    	ComplexNum temp;
    	temp.real = this->getReal() - a;
    	temp.img = this->getImg() - a;
    	return temp;
    } 
    
    //division
    ComplexNum operator/(ComplexNum c)  {
    	ComplexNum temp;
    	temp.real = (this->real / c.getReal());
    	temp.img = (this->img / c.getImg());
    	return temp;
    }
    
    ComplexNum operator/(int a)  {
    	ComplexNum temp;
    	temp.real = this->getReal() / a;
    	temp.img = this->getImg() / a;
    	return temp;
    } 
	
	ComplexNum operator++() {
		ComplexNum c;
	    c.real = ++this->real;
	    c.img = ++this->img;
		return c;
	}
	
	ComplexNum operator++(int a) {
		ComplexNum c;
	    c.real = this->real++;
	    c.img = this->img++;
		return c;
	} 
	
};
//add(int,complex)  --->addition of 1 integer no and 1 complex
ComplexNum operator+(int a,ComplexNum c)  {
    	ComplexNum temp;
    	temp.real = a + c.getReal();
    	temp.img = a + c.getImg();
    	return temp;
}
//subtract(int,complex)
ComplexNum operator-(int a,ComplexNum c)  {
    	ComplexNum temp;
    	temp.real = a - c.getReal();
    	temp.img = a - c.getImg();
    	return temp;
}  
 
//division(int,complex)
ComplexNum operator/(int a,ComplexNum c)  {
    	ComplexNum temp;
    	temp.real = a/(c.getReal());
    	temp.img = a/(c.getImg());
    	return temp;
}   

int main()  {
	ComplexNum c1(80,60),c2(40,20);
	int a = 20;
	//add
	ComplexNum c3 = (c1+c2);
	ComplexNum c4 = (c1+a);
	ComplexNum c5 = (a+c1);
	
	//subtract
	ComplexNum c6 = (c1-c2);
	ComplexNum c7 = (c1-a);
	ComplexNum c8 = (a-c1);
	
	//division
	ComplexNum c12 = (c1/c2);
	ComplexNum c13 = (c1/a);
	int b = 240;
	ComplexNum c14 = (b/c1);
	
	//unary operator
	ComplexNum c15 = ++c1;
	ComplexNum c16 = c2++;
	
	//display
	c1.display();
	c2.display();
	printf("Addition: \n");
	c3.display();
	c4.display();
	c5.display();
	printf("Subtraction: \n");
	c6.display();
	c7.display();
	c8.display();
	
	printf("Division: \n");
	c12.display();
	c13.display();
	c14.display();
	printf("\n");
	
	//unary operator
	printf("Unary Operator\n");
	c15.display();
	c16.display();
	
	
	//getters
    cout<<"Complex Number = "<< c1.getReal() << "+" << c1.getImg()<<"i"<<"\n\n";
    cout<<"Complex Number = "<< c2.getReal() << "+" << c2.getImg()<<"i"<<"\n\n";
    cout<<"Complex Number = "<< c3.getReal() << "+" << c3.getImg()<<"i"<<"\n\n";
    cout<<"Complex Number = "<< c4.getReal() << "+" << c4.getImg()<<"i"<<"\n\n";
    cout<<"Complex Number = "<< c5.getReal() << "+" << c5.getImg()<<"i"<<"\n\n";
    cout<<"Complex Number = "<< c6.getReal() << "+" << c6.getImg()<<"i"<<"\n\n";

	return 0;
}