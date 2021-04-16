#include "Fraction_Private.h"

Fraction_Private::Fraction_Private() : Pair(0, 0) {}
Fraction_Private::Fraction_Private(double first = 0, double second = 0) : Pair(first, second) {}
Fraction_Private::Fraction_Private(Fraction_Private& A) : Pair(A.GetFirst(), A.GetSecond()) {}

Fraction_Private& Fraction_Private::operator = (const Fraction_Private& A)
{
	this->SetFirst(A.GetFirst());
	this->SetSecond(A.GetSecond());

	return *this;
}
ostream& operator << (ostream& out, const Fraction_Private& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Fraction_Private& A)
{
	double first, second;
	cout << "Enter a first number of pair: "; in >> first;
	cout << "Enter a second number of pair: "; in >> second;
	A.SetFirst(first); A.SetSecond(second);
	return in;
}
Fraction_Private::operator string() const
{
	stringstream ss;
	ss << "First number of pair is equal to " << this->GetFirst() << endl;
	ss << "Second number of pair is equal to " << this->GetSecond() << endl;
	return ss.str();
}

int Fraction_Private::ComparePairs(const Fraction_Private p1, const Fraction_Private p2) const
{
	if (p1 > p2)
		return 1;
	if (p1 < p2)
		return 2;
	if (p1 == p2)
		return 3;
}
void Fraction_Private::ComparePairsResult(int result)
{
	switch (result)
	{
	case 1:
		cout << "\nP1 > P2" << endl;
		break;
	case 2:
		cout << "\nP1 < P2" << endl;
		break;
	case 3:
		cout << "\nP1 = P2" << endl;
		break;
	}
}

Fraction_Private& Fraction_Private::operator ++ ()
{
	this->SetFirst(this->GetFirst() + 1);
	return *this;
}
Fraction_Private& Fraction_Private::operator -- ()
{
	this->SetFirst(this->GetFirst() - 1);
	return *this;
}
Fraction_Private Fraction_Private::operator ++ (int)
{
	Fraction_Private t(*this);
	this->SetSecond(this->GetSecond() + 1);
	return t;
}
Fraction_Private Fraction_Private::operator -- (int)
{
	Fraction_Private t(*this);
	this->SetSecond(this->GetSecond() - 1);
	return t;
}
