#pragma once
#include "Pair.h"

class Fraction_Private :private Pair
{
public:
	Fraction_Private();
	Fraction_Private(double, double);
	Fraction_Private(Fraction_Private&);

	Fraction_Private& operator = (const Fraction_Private&);
	friend ostream& operator << (ostream&, const Fraction_Private&);
	friend istream& operator >> (istream&, Fraction_Private&);
	operator string() const;

	int ComparePairs(const Fraction_Private p1, const Fraction_Private p2) const;
	void ComparePairsResult(int result);

	Fraction_Private& operator ++ ();
	Fraction_Private& operator -- ();
	Fraction_Private operator ++ (int);
	Fraction_Private operator -- (int);
};

