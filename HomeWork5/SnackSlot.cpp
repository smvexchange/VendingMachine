#include "SnackSlot.h"
#include "Snack.h"

SnackSlot::SnackSlot() = default;

SnackSlot::SnackSlot(int slots)
{	
	this->index = 0;
	this->size = slots;
	this->slot = new Snack[size];
}

void SnackSlot::addSnack(Snack *snack)
{
	slot[index] = *snack;
	++index;
}
