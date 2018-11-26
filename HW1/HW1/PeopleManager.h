#pragma once
#include <iostream>
#include <vector>
#include "Student.h"
#include "Docent.h"

class PeopleManager
{
private:
	//std::vector<Student*> studenten;
	//std::vector<Docent*> docenten;

public:
	PeopleManager();

	//void addStudent(Student* d);
	//void addDocent(Docent* d);

	void list();

	virtual ~PeopleManager();
};