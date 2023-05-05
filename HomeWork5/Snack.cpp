#include "Snack.h"


Snack::Snack() = default;

Snack::Snack(const string name)
{
	this->name = name;
}

string Snack::getName()
{
	return this->name;
}
