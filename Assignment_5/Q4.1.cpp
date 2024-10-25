#include<stdio.h>
struct Defence_Management{
  virtual void attack()
	{
		printf("\nDefance Management Attack\n");
	}
};
struct Army:public Defence_Management {
	void attack()
	{
	printf("\n Army will attack");
	}
	
};
struct Navy:public Defence_Management{
	void attack()
	{
		printf("\n navy will attack");	
	}
};
struct Airforce:public Defence_Management{
	void attack()
	{
		printf("\n AirForce will attack");	
	}
};

int main()
{
	 Defence_Management* d;
	 Defence_Management d1;
	
	Army a;
	Navy n;
	Airforce ai;
	d=&a;
	d->attack();
	
	d=&n;
	d->attack();
	
}