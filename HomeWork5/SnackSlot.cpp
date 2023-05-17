#include <iostream>
#include "SnackSlot.h"
#include "Snack.h"

SnackSlot::SnackSlot(const int slots)
{	
	index_ = 0;
	size_ = slots;
	slots_ = new Snack*[size_];
	for (size_t i = 0; i < size_; ++i)
	{
		slots_[i] = nullptr;
	}
}

SnackSlot::~SnackSlot()
{
	delete[] slots_;
}

void SnackSlot::addSnack(Snack *snack)
{
	if (index_ == size_)
	{
		std::cout << "SnackSlot is full!" << std::endl;
	}
	else
	{
		slots_[index_] = snack;
		++index_;
	}
}

Snack** SnackSlot::getSlot()
{
	return slots_;
}
