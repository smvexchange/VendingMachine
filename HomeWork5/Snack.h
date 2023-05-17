#pragma once
#ifndef SNACK_H_SENTRY
#define SNACK_H_SENTRY
#include <string>

using namespace std;

class Snack
{
public:
	Snack();
	Snack(const string name);
	string getName();

private:
	string name_;
};

#endif // !SNACK_H_SENTRY