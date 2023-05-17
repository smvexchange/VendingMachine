#pragma once
#ifndef SNACKSLOT_H_SENTRY
#define SNACKSLOT_H_SENTRY
#include "Snack.h"

class SnackSlot
{
public:
	SnackSlot(int slots);
	~SnackSlot();
	void addSnack(Snack *snack);
	Snack** getSlot();
private:
	Snack **slots_ = nullptr;
	int size_;
	int index_;
};

#endif // !SNACKSLOT_H_SENTRY
