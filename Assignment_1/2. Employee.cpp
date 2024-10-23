#include<stdio.h>
#include<string.h>
struct Employee {
	int id;
	char name[20];
	double salary;
	
	Employee()  {
		printf("Default Constructor is called\n");
	    this->id = 0;
		strcpy(this->name,"Not Given");
		this->salary = 0;	
	}
	//Para Constructor
	Employee(int  id,char* name,double salary)  {
		printf("Para Constructor is called\n");
		this->id = id;
		strcpy(this->name,name);
		this->salary = salary;
	}
	//setter
	void setId(int id)  {
		this->id = id;
	}
	
	void setName(char* name)  {
		strcpy(this->name,name);
	}
	
	void setSalary(double salary)  {
		this->salary = salary;
	}
	//getter
	int getId()  {
		return this->id; 
	}
	
	char* getName()  {
		return this->name; 
	}
	
	double getSalary()  {
		return this->salary; 
	}
	//display
	void display() 
    { 
        printf("Id = %d\n",this->id);
	    printf("Name = %s\n",this->name);
	    printf("Salary = %lf\n",this->salary);
	    
	    printf("\n");
    } 
		
};

int main()  {
	Employee e1;
	
	Employee e2(102,"XYZ",35000);
    
    //display
	e1.display();
	e2.display();
	
	//setter
	e1.setId(101);
	e1.setName("ABC");
	e1.setSalary(25000);
	/*
	e2.setId(102);
	e2.setName("XYZ");
	e2.setSalary(35000);
	*/
	
	//display
	e1.display();
	e2.display();
	
	//getter
	printf("ID = %d\n",e1.getId());
	printf("Name = %s\n",e1.getName());
	printf("Salary = %lf\n\n",e1.getSalary());
	
	printf("ID = %d\n",e2.getId());                                                              
	printf("Name = %s\n",e2.getName());                          
    printf("Salary = %lf\n",e2.getSalary());
	
	return 0;	
}