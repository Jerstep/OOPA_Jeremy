#pragma once
#include <iostream>
#include <vector>
#include "Student.h"
#include "Docent.h"

class Module
{
private:
	std::vector<Student*> studenten;
	std::string naam;
	Docent* d;
	int ec;

public:
	Module(std::string _naam, Docent* _d, int _ec);
	void addStudent(Student* d);
	std::string getName();
	std::string getTeacherName();
	int giveEc();
};

