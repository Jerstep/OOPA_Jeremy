#include "Student.h"



Student::Student(std::string _naam) {
	naam = _naam;
	ec = 0;
}

std::string Student::getName() {
	return naam;
}

int Student::getEc() {
	return ec;
}
