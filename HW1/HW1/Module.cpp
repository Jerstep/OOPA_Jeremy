#include "Module.h"

Module::Module(std::string _naam, Docent* _d, int _ec) {
	ec = _ec;
	naam = _naam;
	d = _d;
}

void Module::addStudent(Student * d) {

}

std::string Module::getName() {
	return naam;
}

std::string Module::getTeacherName() {
	return d->getName();
}

int Module::giveEc() {
	return ec;
}
