#include "VendingMachine.h"
#include "SnackSlot.h"

VendingMachine::VendingMachine(int slotCount)
{
	index_ = 0;
	size_ = slotCount;
	snack_slot_ = new SnackSlot*[size_];
	for (size_t i = 0; i < size_; i++)
	{
		snack_slot_[i] = nullptr;
	}
}

int VendingMachine::getEmptySlotsCount()
{
	return size_ - index_;
}

void VendingMachine::addSlot(SnackSlot* slot)
{
	snack_slot_[index_] = slot;
	++index_;
}
