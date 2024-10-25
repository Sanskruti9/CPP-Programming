#include<stdio.h>
struct Notification{
	char msg[10];
	virtual void send_notification()
	{
		printf("\n send notification");
	}
};
struct Email:public Notification{
	char mailID[20];
	char sub[10];
	void send_notification()
	{
		printf("\n email notification send");
	}
};
struct Sms:public Notification{
	long contact;
	void send_notification()
	{
		printf("\n Sms notification send");
	}
	
};
int main()
{
	Notification* n;
	Notification n1;
	
	Email e;
	Sms s;
	 
	n=&e;
	n->send_notification();
	n=&s;
	n->send_notification();
	
	
}