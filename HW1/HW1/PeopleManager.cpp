#include "PeopleManager.h"
#include "Module.h"
#include <iostream>
#include <string>


PeopleManager::PeopleManager() {

	//Docenten
	Docent* engelsDocent = new Docent("Potter Engelsman");
	Docent* duitsDocent = new Docent("Harry Duitsman");
	Docent* wiskundeDocent = new Docent("Achmet Whishkunde");

	//Modules
	Module* engels = new Module("Engels", engelsDocent, 2);
	Module* duits = new Module("Engels", duitsDocent, 3);
	Module* wiskunde = new Module("Engels", wiskundeDocent, 5);

	//Studenten engels
	engels->addStudent(new Student("MahMan Benry"));
	engels->addStudent(new Student("Joehoe Berry"));
	engels->addStudent(new Student("Gaat Kosme"));
	engels->addStudent(new Student("Jemen Dremen"));
	engels->addStudent(new Student("Frand Doedoe"));
	engels->addStudent(new Student("Johannes Bleg"));
	engels->addStudent(new Student("Su k Ma Nuts"));
	engels->addStudent(new Student("Johan Klaasen"));
	engels->addStudent(new Student("Smup Ladup"));
	engels->addStudent(new Student("Jhon Callahan"));

	//Studenten Duits
	duits->addStudent(new Student("MahMan Benry"));
	duits->addStudent(new Student("Joehoe Berry"));
	duits->addStudent(new Student("Gaat Kosme"));
	duits->addStudent(new Student("Jemen Dremen"));
	duits->addStudent(new Student("Frand Doedoe"));
	duits->addStudent(new Student("Johannes Bleg"));
	duits->addStudent(new Student("Su k Ma Nuts"));

	//Studenten Wiskunde
	wiskunde->addStudent(new Student("Jemen Dremen"));
	wiskunde->addStudent(new Student("Frand Doedoe"));
	wiskunde->addStudent(new Student("Johannes Bleg"));
	wiskunde->addStudent(new Student("Su k Ma Nuts"));
	wiskunde->addStudent(new Student("Johan Klaasen"));
	wiskunde->addStudent(new Student("Smup Ladup"));
	wiskunde->addStudent(new Student("Jhon Callahan"));
}

//void PeopleManager::addStudent(Student* d) {
//	studenten.push_back(d);
//}
//
//void PeopleManager::addDocent(Docent* d) {
//	docenten.push_back(d);
//}

void PeopleManager::list() {
	std::cout << "----- " << std::endl;

	std::vector<Student*>::iterator it = engels->studenten.begin();
	while (it != engels->studenten.end()) {
		std::cout << "Student Naam: " << (*it)->getName();
		std::cout << " Ec Punten: " << (*it)->getEc() + engels.ec << std::endl;
		it++;
	}

	std::vector<Student*>::iterator it = duits->studenten.begin();
	while (it != duits->studenten.end()) {
		std::cout << "Student Naam: " << (*it)->getName();
		std::cout << " Ec Punten: " << (*it)->getEc() + duits.ec << std::endl;
		it++;
	}

	std::vector<Student*>::iterator it = wiskunde->studenten.begin();
	while (it != wiskunde->studenten.end()) {
		std::cout << "Student Naam: " << (*it)->getName();
		std::cout << " Ec Punten: " << (*it)->getEc() + wiskunde.ec << std::endl;
		it++;
	}

	std::cout << "-----" << std::endl;
}

PeopleManager::~PeopleManager() {
}
