#include <iostream>
#include <string>
using namespace std;

class employee {
public:
	virtual double calculateSalary() const = 0;
};
class fulltimeemployee : public employee {
private:
	double salary; 
public:
    fulltimeemployee(double s) : salary(s) {}
    double calculateSalary() const override {
		return salary;
	}
};
class parttimeemployee : public employee {
private:
	double hourlyRate; 
	double hoursWorked; 
public:
	parttimeemployee(double rate, double hours) : hourlyRate(rate), hoursWorked(hours) {}
    double calculateSalary() const override {
		return hourlyRate * hoursWorked; 
	}
};
int main() {
	fulltimeemployee fulltimeemployee(8000);
    parttimeemployee partTimeEmployee(40,90);
    cout << "Full-Time Employee Salary: " << fulltimeemployee.calculateSalary() << endl;
	cout << "Part-Time Employee Salary: " << partTimeEmployee.calculateSalary() << endl;

	system("pause");
	return 0;
}
