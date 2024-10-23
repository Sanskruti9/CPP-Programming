#include<stdio.h>
#include<string.h>
struct Admin {
	int id;
	char name[20];
	double salary;
	double allowance;
	
	//default Constructor
	Admin()  {
		printf("Default Constructor is called\n");
		this->id = 0;
		strcpy(this->name,"Not Given");
		this->salary = 0;
		this->allowance = 0;
	}
	//Para Constructor
	Admin(int  id,char* name,double salary,double allowance)  {
		printf("Para Constructor is called\n");
		this->id = id;
		strcpy(this->name,name);
		this->salary = salary;
		this->allowance = allowance;
	}
	
	void setId(int id)  {
		this->id = id;
	}
	void setName(char* name)  {
		strcpy(this->name, name);
	}
	void setSalary(double sal)  {
		this->salary = sal;
	}
	void setAllowance(double allowance)  {
		this->allowance = allowance;
	}
	
	int getId()  {
		return this->id;
	}
	char* getName()  {
		return this->name;
	}
	double getSalary()  {
		return this->salary;
	}
	double getAllowance()  {
		return this->allowance;
	}
	
	void display()  {
	   printf("Id = %d\n",this->id);
	   printf("Name = %s\n",this->name);
	   printf("Salary = %.2lf\n",this->salary);
	   printf("Allowance = %.2lf\n\n",this->allowance);
    }
};


int main()  {
	Admin a1;
	Admin a2(102,"XYZ",35000,10000);
	
	//display
	a1.display();
	a2.display();
	//setter
	a1.setId(101);
	a1.setName("ABC");
	a1.setSalary(25000);
	a1.setAllowance(5000);
	/*
	a2.setId(102);
	a2.setName("XYZ");
	a2.setSalary(35000);
	a2.setAllowance(10000);
	*/
	//display
	a1.display();
	a2.display();
	
	//getter
	printf("ID = %d\n",a1.getId());
	printf("Name = %s\n",a1.getName());
	printf("Salary = %.2lf\n",a1.getSalary());
	printf("Allowance = %.2lf\n\n",a1.getAllowance());
	
	printf("ID = %d\n",a2.getId());                                                                
	printf("Name = %s\n",a2.getName());                      
    printf("Salary = %.2lf\n",a2.getSalary());
    printf("Allowance = %.2lf\n\n",a2.getAllowance());
	
	return 0;
}