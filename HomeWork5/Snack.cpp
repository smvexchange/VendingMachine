#include "Snack.h"


Snack::Snack() = default;

Snack::Snack(const string name)
{
	name_ = name;
}

string Snack::getName()
{
	return name_;
}
