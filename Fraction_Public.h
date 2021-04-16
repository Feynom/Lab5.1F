#pragma once
#include "Pair.h"

class Fraction_Public : public Pair
{
public:
	Fraction_Public();
	Fraction_Public(double, double);
	Fraction_Public(Fraction_Public&);

	Fraction_Public& operator = (const Fraction_Public&);
	friend ostream& operator << (ostream&, const Fraction_Public&);
	friend istream& operator >> (istream&, Fraction_Public&);
	operator string() const;

	int ComparePairs(const Pair p1, const Pair p2) const;
	void ComparePairsResult(int result);

	Fraction_Public& operator ++ ();
	Fraction_Public& operator -- ();
	Fraction_Public operator ++ (int);
	Fraction_Public operator -- (int);
};

