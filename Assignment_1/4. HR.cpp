#include<stdio.h>
#include<string.h>
struct HR {
	int id;
	char name[20];
	double salary;
	double commision;
	
	//default Constructor
	HR()  {
		printf("Default Constructor is called\n");
		this->id = 0;
		strcpy(this->name,"Not Given");
		this->salary = 0;
		this->commision = 0;
	}
	//Para Constructor
	HR(int  id,char* name,double salary,double commision)  {
		printf("Para Constructor is called\n");
		this->id = id;
		strcpy(this->name,name);
		this->salary = salary;
		this->commision = commision;
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
	void setCommision(double commision)  {
		this->commision = commision;
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
	double getCommision()  {
		return this->commision;
	}
	
	void display()  {
	   printf("Id = %d\n",this->id);
	   printf("Name = %s\n",this->name);
	   printf("Salary = %lf\n",this->salary);
	   printf("Commision = %lf\n\n",this->commision);
    }
};
int main()  {
	HR h1;
	HR h2(102,"XYZ",35000,10000);
	
	//display
	h1.display();
	h2.display();
	
	//setter
	h1.setId(101);
	h1.setName("ABC");
	h1.setSalary(25000);
	h1.setCommision(5000);
	/*
	h2.setId(102);
	h2.setName("XYZ");
	h2.setSalary(35000);
	h2.setCommision(10000);
	*/
	//display
	h1.display();
	h2.display();
	
	//getter
	printf("ID = %d\n",h1.getId());
	printf("Name = %s\n",h1.getName());
	printf("Salary = %.2lf\n",h1.getSalary());
	printf("Commision = %.2lf\n\n",h1.getCommision());
	
	printf("ID = %d\n",h2.getId());                                                                
	printf("Name = %s\n",h2.getName());                      
    printf("Salary = %.2lf\n",h2.getSalary());
    printf("Commision = %.2lf\n\n",h2.getCommision());
	
	return 0;
}