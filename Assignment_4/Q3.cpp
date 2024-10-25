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
    void breaking() { 
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
    Car c1;
    Truck t1;
    Bike b1;

    c1.start();
    t1.start();
    b1.start();

    c1.stop();
    t1.stop();
    b1.stop();

    c1.breaking();
    t1.breaking();
    b1.breaking();

    return 0;
}