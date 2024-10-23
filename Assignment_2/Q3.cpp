#include <iostream>
using namespace std;

void approveLoan(float percentage) {
    if (percentage > 80) {
        cout << "Loan Approved: 2 Lakh" << endl;
    } else if (percentage >= 60 && percentage <= 80) {
        cout << "Loan Approved: 1 Lakh" << endl;
    } else if (percentage >= 40 && percentage < 60) {
        cout << "Loan Approved: 50 K" << endl;
    } else {
        cout << "Loan Not Approved" << endl;
    }
}

void approveLoan(double salary) {
    if (salary > 12) {
        cout << "Loan Approved: 7 Lakh" << endl;
    } else if (salary >= 10 && salary <= 12) {
        cout << "Loan Approved: 6 Lakh" << endl;
    } else if (salary >= 6 && salary < 10) {
        cout << "Loan Approved: 5 Lakh" << endl;
    } else if (salary >= 4 && salary < 6) {
        cout << "Loan Approved: 4 Lakh" << endl;
    } else {
        cout << "Loan Not Approved" << endl;
    }
}

int main() {
    float studentPercentage;
    double employeeSalary;

    // for a student
    cout << "Enter Student's percentage: ";
    cin >> studentPercentage;
    approveLoan(studentPercentage);

    // for an employee
    cout << "Enter Employee's annual salary (in LPA): ";
    cin >> employeeSalary;
    approveLoan(employeeSalary);

    return 0;
}
