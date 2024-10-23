#include<stdio.h>
#include<string.h>
struct Student {
	int RollNo;
	char Name[20];
	float Marks;
	
	//Default Constructor
	Student()  {
		printf("Default Constructor is called\n");
		this->RollNo = 0;
		strcpy(this->Name, "Not Given");
		this->Marks = 0;
	}
	//Para Constructor
	Student(int roll,char* name,float marks)  {
		printf("Para Constructor is called\n");
		this->RollNo = roll;
		strcpy(this->Name, name);
		this->Marks = marks;
	}
	void setRollNo(int RollNo)  {
		this->RollNo = RollNo;
	}
	void setName(char* Name)  {
		strcpy(this->Name, Name);
	}
	void setMarks(float Marks)  {
		this->Marks = Marks;
	}
	int getRollNo()  {
		return this->RollNo;
	}
	char* getName()  {
		return this->Name;
	}
	float getMarks()  {
		return this->Marks;
	}
	void display()  {
		printf("RollNo = %d \n",this->RollNo);
	    printf("Name = %s \n",this->Name);
	    printf("Marks = %.2f \n",this->Marks);
	    printf("\n");
	}
};

int main()  { 

	Student s1;
	
	Student s2(3,"ABC",78),s3(4,"PQR",80);
	
    //display
    s1.display();
    s2.display();
    s3.display();
    
	//setters
	int Rollno;
	char Name[20];
	float Marks;
	printf("Enter Roll Number: ");
	scanf("%d", &Rollno);
	printf("Enter Name: ");
	fflush(stdin);
	gets(Name);
	printf("Enter Marks: ");
	scanf("%f",&Marks);
	
	printf("\n");
    s1.setRollNo(Rollno);
    s1.setName(Name);
    s1.setMarks(Marks);
	
	printf("\n");
	
	//getters
	printf("RollNo = %d \n",s1.getRollNo());
	printf("Name = %s \n",s1.getName());
	printf("Marks = %.2f \n",s1.getMarks());
	printf("\n");
	
	printf("RollNo = %d \n",s2.getRollNo());
	printf("Name = %s \n",s2.getName());
	printf("Marks = %.2f \n",s2.getMarks());
	printf("\n");
	
	printf("RollNo = %d \n",s3.getRollNo());
	printf("Name = %s \n",s3.getName());
	printf("Marks = %.2f \n",s3.getMarks());
	printf("\n");
	
	return 0;
	
	/*
	Student students[3];
    int roll;
    char name[20];
    float marks;

    // setters
    for (int i = 0; i < 3; i++) {
        printf("Enter Roll Number: ");
        scanf("%d", &roll);
        printf("Enter Name: ");
        scanf("%s", name);
        printf("Enter Marks: ");
        scanf("%f", &marks);
        printf("\n");

        students[i].setRollNo(roll);
        students[i].setName(name);
        students[i].setMarks(marks);
    }

    // Display
    for (int i = 0; i < 3; i++) {
        students[i].display();
    }

    // getters 
    for (int i = 0; i < 3; i++) {
        //printf("Using Getters:\n");
        printf("RollNo = %d\n", students[i].getRollNo());
        printf("Name = %s\n", students[i].getName());
        printf("Marks = %.2f\n\n", students[i].getMarks());
    }
*/
}
