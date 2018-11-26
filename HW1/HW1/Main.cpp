#include <iostream>
#include <vector>

#include "PeopleManager.h"

int main() {
	PeopleManager manager = PeopleManager();

	manager.list();

	std::cout << "Press ENTER to continue...";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	return 0;
}