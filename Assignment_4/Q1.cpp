#include<iostream>
using namespace std;
class Employee {
	private:
	int id;
	char name[20];
	double salary;
	
	public:
	//default constructor
	Employee()  {
		cout<< "Emp Default Constructor is called" << "\n";
	    this->id = 0;
		strcpy(this->name,"Not Given");
		this->salary = 0;	
	}
	//Para Constructor
	Employee(int  id,char* name,double salary)  {
		cout<< "Emp Para Constructor is called" << "\n";
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
	void display()  {   
        cout<< "Employee : \n";
        cout << "Id = "<< this->id <<"\n";
        cout << "Name = " << this->name <<"\n";
        cout << "Salary = "<< this->salary << "\n";
    } 
	
	//calculate salary
	double calSal()  {
		return this->salary;
	}		
};

class HR: public Employee {
    private:
	double commision;
	
	public:
	//default Constructor
	HR()  {
		cout<< "HR Default Constructor is called" << "\n";
		this->commision = 0;
	}
	//Para Constructor
	HR(int  id,char* name,double salary,double commision):Employee(id,name,salary)  {
		cout<< "HR Para Constructor is called" << "\n";
		this->commision = commision;
	}
	void setCommision(double commision)  {
		this->commision = commision;
	}
	double getCommision()  {
		return this->commision;
	}
	
	void display()  {
	   cout<< "HR Display: \n";
	   Employee::display();
	   cout<< "Commision = " << this->commision << "\n";
    }
    
    double calSal()  {
    	double totalSalary = getSalary() + this->commision;
		return totalSalary;
	}
};

class SalesManager:public Employee {
	private:
	double incentive;
	double target;
	
	public:
	//Default Constructor
	SalesManager()  {
		cout<< "SM Default Constructor is called" << "\n";
		this->incentive = 0;
		this->target = 0;
	}
	//Para Constructor
	SalesManager(int  id,char* name,double salary,double incentive,double target):Employee(id,name,salary)  {
		cout<< "SM Para Constructor is called" << "\n";
		this->incentive = incentive;
		this->target = target;
	}
	//setter
	void setIncentive(double incentive)  {
		this->incentive = incentive;
	}
	void setTarget(double target)  {
		this->target = target;
	}
	//getter
	double getIncentive()  {
		return this->incentive;
	}
	double getTarget()  {
		return this->target; 
	}
	
	void display()  {
	   cout<< "SalesManager Display: \n";
	   Employee::display();
	   cout<< "Incentive = " << this->incentive << "\n";
	   cout<< "Target = " << this->target << "\n";
    }
    
    double calSal()  {
    	double totalSalary = getSalary() + this->incentive;
		return totalSalary;
	}
};

class Admin: public Employee {   
	private:
	double allowance;
	
	public:
	//default Constructor
	Admin()  {
		cout<< "Admin Default Constructor is called" << "\n";
		this->allowance = 0;	
	}
	//Para Constructor
	Admin(int id,char* name,double salary,double allowance):Employee(id,name,salary)  {
		cout<< "Admin Para Constructor is called" << "\n";
		this->allowance = allowance;
	}
	//Admin setter
	void setAllowance(double allowance)  {
		this->allowance = allowance;
	}
	//Admin getter
	double getAllowance()  {
		return this->allowance;
	}
	
	void display()  {
	   cout<< "Admin Display: \n";
	   Employee::display();
	   cout<<"Allowance = " << this->allowance <<"\n";
    }
    
    double calSal()  {
    	double totalSalary = getSalary() + this->allowance;
		return totalSalary;
	}
};

int main()  {
	Employee e1(1,"ABC",5000);
	HR h1(2,"XYZ",10000,2000);
	SalesManager s1(3,"LMN",7000,1000,50);
	Admin a1(4,"PQR",6000,500);
	
	//display
	e1.display();
	cout<< "TotalSalary = "<< e1.calSal() <<endl<<endl;
	h1.display();
	cout<< "TotalSalary = "<< h1.calSal() <<endl<<endl;
	s1.display();
	cout<< "TotalSalary = "<< s1.calSal() <<endl<<endl;
	a1.display();
	cout<< "TotalSalary = "<< a1.calSal() <<endl<<endl;
	
	return 0;
}

