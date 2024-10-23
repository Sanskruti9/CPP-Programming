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
    //c1.add(c2)   --->addition of 2 complex numbers
    ComplexNum add(ComplexNum c)  {
    	ComplexNum temp;
    	temp.real = (this->real + c.getReal());
    	temp.img = (this->img + c.getImg());
    	return temp;
    }
    
    //add(int)  --->addition of 1 complex no and 1 integer
    ComplexNum add(int a)  {
    	ComplexNum temp;
    	temp.real = this->getReal() + a;
    	temp.img = this->getImg() + a;
    	return temp;
    } 
    
    //subtract
    ComplexNum subtract(ComplexNum c)  {
    	ComplexNum temp;
    	temp.real = (this->real - c.getReal());
    	temp.img = (this->img - c.getImg());
    	return temp;
    }
    
    ComplexNum subtract(int a)  {
    	ComplexNum temp;
    	temp.real = this->getReal() - a;
    	temp.img = this->getImg() - a;
    	return temp;
    } 
    
    //multiply
    ComplexNum multiply(ComplexNum c)  {
    	ComplexNum temp;
    	temp.real = (this->real * c.getReal());
    	temp.img = (this->img * c.getImg());
    	return temp;
    }
    
    ComplexNum multiply(int a)  {
    	ComplexNum temp;
    	temp.real = this->getReal() * a;
    	temp.img = this->getImg() * a;
    	return temp;
    } 
    
    //division
    ComplexNum division(ComplexNum c)  {
    	ComplexNum temp;
    	temp.real = (this->real / c.getReal());
    	temp.img = (this->img / c.getImg());
    	return temp;
    }
    
    ComplexNum division(int a)  {
    	ComplexNum temp;
    	temp.real = this->getReal() / a;
    	temp.img = this->getImg() / a;
    	return temp;
    } 
	
	  
};
//add(int,complex)  --->addition of 1 integer no and 1 complex
ComplexNum add(int a,ComplexNum c)  {
    	ComplexNum temp;
    	temp.real = a + c.getReal();
    	temp.img = a + c.getImg();
    	return temp;
}
//subtract(int,complex)
ComplexNum subtract(int a,ComplexNum c)  {
    	ComplexNum temp;
    	temp.real = a - c.getReal();
    	temp.img = a - c.getImg();
    	return temp;
}  
//multiply(int,complex)
ComplexNum multiply(int a,ComplexNum c)  {
    	ComplexNum temp;
    	temp.real = a*(c.getReal());
    	temp.img = a*(c.getImg());
    	return temp;
}  
//division(int,complex)
ComplexNum division(int a,ComplexNum c)  {
    	ComplexNum temp;
    	temp.real = a/(c.getReal());
    	temp.img = a/(c.getImg());
    	return temp;
}   

int main()  {
	ComplexNum c1(80,60),c2(40,20);
	int a = 20;
	//add
	ComplexNum c3 = c1.add(c2);
	ComplexNum c4 = c1.add(a);
	ComplexNum c5 = add(a,c1);
	
	//subtract
	ComplexNum c6 = c1.subtract(c2);
	ComplexNum c7 = c1.subtract(a);
	ComplexNum c8 = subtract(a,c1);
	
	//multiply
	ComplexNum c9 = c1.multiply(c2);
	ComplexNum c10 = c1.multiply(a);
	ComplexNum c11 = multiply(a,c1);
	
	//division
	ComplexNum c12 = c1.division(c2);
	ComplexNum c13 = c1.division(a);
	int b = 240;
	ComplexNum c14 = division(b,c1);
	
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
	printf("Multiplication: \n");
	c9.display();
	c10.display();
	c11.display();
	printf("Division: \n");
	c12.display();
	c13.display();
	c14.display();
	printf("\n");
	/*
	//setters
	c1.setReal(2);
	c1.setImg(4);
	
	c2.setReal(7);
	c2.setImg(9);
	*/
	/*
	//display
	c1.display();
	c2.display();
	c3.display();
	c4.display();
	c5.display();
	c6.display();
	printf("\n");
	*/
	/*
	//getters
	printf("Complex Number = %d + %di\n\n",c1.getReal(), c1.getImg());
	printf("Complex Number = %d + %di\n\n",c2.getReal(), c2.getImg());
	printf("Complex Number = %d + %di\n\n",c3.getReal(), c3.getImg());
	printf("Complex Number = %d + %di\n\n",c4.getReal(), c4.getImg());
	printf("Complex Number = %d + %di\n\n",c5.getReal(), c5.getImg());
	printf("Complex Number = %d + %di\n\n",c6.getReal(), c6.getImg());
	*/
	
	return 0;
}