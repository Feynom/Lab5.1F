#include "Pair.h"

void Pair::SetFirst(double value) { first = value; }
void Pair::SetSecond(double value) { second = value; }

double Pair::GetFirst() const { return first; }
double Pair::GetSecond() const { return second; }

Pair::Pair() { first = 0, second = 0; }
Pair::Pair(double first = 0, double second = 0) throw(invalid_argument, bad_exception, MyException, const char*)
{
	if (first == 1 && second == 1)
		throw invalid_argument("Invalid_argument");
	else if (first == 2 && second == 2)
		throw bad_exception();
	else if (first == 3 && second == 3)
		throw MyException("MyException");
	else if (first == 4 && second == 4)
		throw "Exception";

	this->first = first;
	this->second = second;
}
Pair::Pair(const Pair& A)
{
	first = A.GetFirst();
	second = A.GetSecond();
}

bool operator > (const Pair p1, const Pair p2)
{
	if (p1.GetFirst() > p2.GetFirst() ||
		(p1.GetFirst() == p2.GetFirst() && p1.GetSecond() > p2.GetSecond()))
		return 1;
	else
		return 0;
}
bool operator < (const Pair p1, const Pair p2)
{
	if (p1.GetFirst() < p2.GetFirst() ||
		(p1.GetFirst() == p2.GetFirst() && p1.GetSecond() < p2.GetSecond()))
		return 1;
	else
		return 0;
}
bool operator == (const Pair p1, const Pair p2)
{
	if ((p1.GetFirst() == p2.GetFirst()) &&
		(p1.GetSecond() == p2.GetSecond()))
		return 1;
	else
		return 0;
}