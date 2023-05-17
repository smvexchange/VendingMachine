#pragma once
#ifndef VENDINGMACHINE_H_SENTRY
#define VENDINGMACHINE_H_SENTRY

#include "SnackSlot.h"
class VendingMachine
{
public:
	VendingMachine(const int slotCount);
	int getEmptySlotsCount();
	void addSlot(SnackSlot* slot);
private:
	SnackSlot** snack_slot_ = nullptr;
	int index_;
	int size_;
};

#endif // VENDINGMACHINE_H_SENTRY

