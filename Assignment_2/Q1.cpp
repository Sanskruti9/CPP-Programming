#include<iostream>
using namespace std;
struct Calculator{
	int a, b;
	float c, d;
	
	//addition
	int add(int a,int b)  {
		return a+b;
	}
	float add(float c,float d) {
		return c+d;
	}
	float add(int a,float c) {
		return a+c;
	}
	float add(float c,int a)  {
		return c+a;
	}
	//subtraction
	int subtract(int a,int b)  {
		return a-b;
	}
	float subtract(float c,float d) {
		return c-d;
	}
	float subtract(int a,float c) {
		return a-c;
	}
	float subtract(float c,int a)  {
		return c-a;
	}
	//multiplication
	int multiply(int a,int b) {
		return a*b;
	}
	float multiply(float c,float d) {
		return c*d;
	}
	float multiply(int a,float c) {
		return a*c;
	}
	float multiply(float c,int a)  {
		return c*a;
	}
	
	//division
	int division(int a,int b) {
		return a/b;
	}
	float division(float c,float d) {
		return c/d;
	}
	float division(int a,float c) {
		return a/c;
	}
	float division(float c,int a)  {
		return c/a;
	}
	
};
int main()  {
	Calculator c1;
    int a = 40, b = 10;
    float c = 20.2, d = 10.2;
    
	cout<<"Addition = "<<c1.add(a,b)<<"\n";
	cout<<"Addition = "<<c1.add(c,d)<<"\n";
	cout<<"Addition = "<<c1.add(a,c)<<"\n";
	cout<<"Addition = "<<c1.add(c,b)<<"\n\n";
	
	cout<<"Subtraction = "<<c1.subtract(a,b)<<"\n";
	cout<<"Subtraction = "<<c1.subtract(c,d)<<"\n";
	cout<<"Subtraction = "<<c1.subtract(a,c)<<"\n";
	cout<<"Subtraction = "<<c1.subtract(c,b)<<"\n\n";
	
	cout<<"Multiplication = "<<c1.multiply(a,b)<<"\n";
	cout<<"Multiplication = "<<c1.multiply(c,d)<<"\n";
	cout<<"Multiplication = "<<c1.multiply(a,c)<<"\n";
	cout<<"Multiplication = "<<c1.multiply(c,b)<<"\n\n";
	
	cout<<"Division = "<<c1.division(a,b)<<"\n";
	cout<<"Division = "<<c1.division(c,d)<<"\n";
	cout<<"Division = "<<c1.division(a,c)<<"\n";
	cout<<"Division = "<<c1.division(c,b)<<"\n\n";

	
	return 0;
}