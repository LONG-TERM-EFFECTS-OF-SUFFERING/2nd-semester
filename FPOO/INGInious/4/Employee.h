#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;


class Employee {
	private:
		char grade;

	public:
		Employee();
		~Employee();
		void setGrade();
		void qualify();
};

#endif
