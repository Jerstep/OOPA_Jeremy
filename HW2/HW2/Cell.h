#pragma once
class Cell
{
private:
	bool alive;
public:
	Cell(bool alive);
	bool isAlive();
	~Cell();
};

