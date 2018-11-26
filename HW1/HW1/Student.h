#pragma once
#include <iostream>

class Student
{
private:
	std::string naam;

public:
	int ec;

	Student(std::string _naam);
	std::string getName();
	int getEc();
};

