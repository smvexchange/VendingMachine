#pragma once
#ifndef VENDINGMACHINE_H_SENTRY
#define VENDINGMACHINE_H_SENTRY

#include "SnackSlot.h"
class VendingMachine
{
public:
	VendingMachine(int slotCount);
	int getEmptySlotsCount();
	void addSlot(SnackSlot* slot);
private:
	SnackSlot* snack_slot;
	int index;
	int size;
};

#endif // VENDINGMACHINE_H_SENTRY

