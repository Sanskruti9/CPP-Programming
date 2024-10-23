#include<stdio.h>
#include<string.h>
struct SalesManager {
	int id;
	char name[20];
	double salary;
	double incentive;
	double target;
	
	//Default Constructor
	SalesManager()  {
		printf("Default Constructor is called\n");
		this->id = 0;
		strcpy(this->name,"Not Given");
		this->salary = 0;
		this->incentive = 0;
		this->target = 0;
	}
	//Para Constructor
	SalesManager(int  id,char* name,double salary,double incentive,double target)  {
		printf("Para Constructor is called\n");
		this->id = id;
		strcpy(this->name,name);
		this->salary = salary;
		this->incentive = incentive;
		this->target = target;
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
	void setIncentive(double incentive)  {
		this->incentive = incentive;
	}
	void setTarget(double target)  {
		this->target = target;
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
	double getIncentive()  {
		return this->incentive;
	}
	double getTarget()  {
		return this->target; 
	}
	
	void display()  {
	   printf("Id = %d\n",this->id);
	   printf("Name = %s\n",this->name);
	   printf("Salary = %.2lf\n",this->salary);
	   printf("Incentive = %.2lf\n",this->incentive);
	   printf("Target = %.2lf\n\n",this->target);
    }
};


int main()  {
	SalesManager s1;
	SalesManager s2(102,"XYZ",35000,8000,2000);
	
	//display
	s1.display();
	s2.display();
	
	//setters
	s1.setId(101);
	s1.setName("ABC");
	s1.setSalary(25000);
	s1.setIncentive(5000);
	s1.setTarget(1000);
	/*
	s2.setId(102);
	s2.setName("XYZ");
	s2.setSalary(35000);
	s2.setIncentive(8000);
	s2.setTarget(2000);
	*/
	//display
	s1.display();
	s2.display();
	
	//getter
	printf("ID = %d\n",s1.getId());
	printf("Name = %s\n",s1.getName());
	printf("Salary = %.2lf\n",s1.getSalary());
	printf("Incentive = %.2lf\n",s1.getIncentive());
	printf("Target = %.2lf\n\n",s1.getTarget());
	
	printf("ID = %d\n",s2.getId());
	printf("Name = %s\n",s2.getName());
	printf("Salary = %.2lf\n",s2.getSalary());
	printf("Incentive = %.2lf\n",s2.getIncentive());
	printf("Target = %.2lf\n\n",s2.getTarget());
    
	return 0;
}