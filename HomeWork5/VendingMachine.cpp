#include "VendingMachine.h"
#include "SnackSlot.h"

VendingMachine::VendingMachine(int slotCount)
{
	this->index = 0;
	this->size = slotCount;
	this->snack_slot = new SnackSlot[size];
}

int VendingMachine::getEmptySlotsCount()
{
	return this->size - this->index;
}

void VendingMachine::addSlot(SnackSlot* slot)
{
	snack_slot[index] = *slot;
	++index;
}
