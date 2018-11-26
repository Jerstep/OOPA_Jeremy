#include "Cell.h"


Cell::Cell(bool _alive) {
	alive = _alive;
}

bool Cell::isAlive() {
	return alive;
}


Cell::~Cell() {
}
