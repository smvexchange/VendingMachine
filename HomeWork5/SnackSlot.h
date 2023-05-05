#pragma once
#ifndef SNACKSLOT_H_SENTRY
#define SNACKSLOT_H_SENTRY
#include "Snack.h"

class SnackSlot
{
public:
	SnackSlot();
	SnackSlot(int slots);
	void addSnack(Snack *snack);
private:
	int size;
	Snack *slot;
	int index;
};

#endif // !SNACKSLOT_H_SENTRY
