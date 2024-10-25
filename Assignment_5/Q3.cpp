#include <iostream>
using namespace std;

class Vehicle
{   
    public:
    void start() { 
	   cout << "\nVehicle Start"; 
	}
    void stop() { 
	   cout << "\nVehicle Stop"; 
	}
    virtual void breaking() { 
	   cout << "\nVehicle Break"; 
	}
};

class Car : public Vehicle
{   
    public:
    void start() { 
	   cout << "\nCar Start"; 
	}
    void breaking() { 
	   cout << "\nCar Break"; 
	}
};

class Truck : public Vehicle
{   
    public:
    void start() { 
	    cout << "\nTruck Start"; 
	}
    void breaking() { 
	    cout << "\nTruck Break"; 
	}
};

class Bike : public Vehicle
{
    public:
    void start() { 
	    cout << "\nBike Start"; 
	}
    void breaking() { 
	    cout << "\nBike Break"; 
	}
};

int main()
{   
    Vehicle* v;
    
    Car c1;
    Truck t1;
    Bike b1;

    //break
    v = &c1;
    v->breaking();
    v = &t1;
    v->breaking();
    v = &b1;
    v->breaking();
    
    return 0;
}