#include "Cell.h"
#include "Empty.h"
#include <iostream>
#include <vector>


int main() {
	int gridSize = 25;

	std::vector<std::string> row;
	std::vector<std::string> colom;

	for (int i = 0; i < gridSize; i++) {
		
		std::cout << " o ";
		for (int o = 0; o < gridSize; o++) {
			row.push_back(" 0 ");
			std::cout << row[o];
			if (o == gridSize -1) {
				colom.push_back(" o ");
				//std::cout << " o " << std::endl;
			}
		}
	}
}

void evelution() {
	if()
}