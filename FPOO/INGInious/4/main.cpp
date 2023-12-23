/**
 * Creates an instance of the Employee class, sets the grade for the employee, and
 * then calls the qualify function to display the corresponding qualification.
 *
 * - If the grade of the employee is "a", his qualification is "Acceptable".
 * - If the grade of the employee is "b", his qualification is "Good".
 * - If the grade of the employee is "e", his qualification is "Excellent".
 * - For any other grade, returns "Isn't qualified".
 */
#include "Employee.h"


int main() {
	Employee employee;

	employee.setGrade();
	employee.qualify();

	return 0;
}
