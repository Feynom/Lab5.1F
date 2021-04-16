#pragma once
#include <iostream>
#include <sstream>

#include "MyException.h"

using namespace std;

class Pair
{
private:
	double first, second;
public:
	void SetFirst(double value);
	void SetSecond(double value);

	double GetFirst() const;
	double GetSecond() const;

	Pair();
	Pair(double, double) throw(invalid_argument, bad_exception, MyException, const char*);
	Pair(const Pair&);

	friend bool operator > (const Pair p1, const Pair p2);
	friend bool operator < (const Pair p1, const Pair p2);
	friend bool operator == (const Pair p1, const Pair p2);
};

