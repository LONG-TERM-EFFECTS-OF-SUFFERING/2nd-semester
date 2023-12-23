#include <iostream>

#include "Employee.h"


Employee::Employee() {

}

Employee::~Employee() {

}

void Employee::setGrade() {
	cout << "Write the grade: ";
	cin >> grade;
}

void Employee::qualify() {
	switch (grade) {
		case 'a':
			cout << "Acceptable" << endl;
			break;

		case 'b':
			cout << "Good" << endl;
			break;

		case 'e':
			cout << "Excellent" << endl;
			break;

		default:
			cout << "Isn't qualified" << endl;
	}
}
