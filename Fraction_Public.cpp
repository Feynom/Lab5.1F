#include "Fraction_Public.h"

Fraction_Public::Fraction_Public() : Pair(0, 0) {}
Fraction_Public::Fraction_Public(double first = 0, double second = 0) : Pair(first, second) {}
Fraction_Public::Fraction_Public(Fraction_Public& A) : Pair(A.GetFirst(), A.GetSecond()) {}

Fraction_Public& Fraction_Public::operator = (const Fraction_Public& A)
{
	this->SetFirst(A.GetFirst());
	this->SetSecond(A.GetSecond());

	return *this;
}
ostream& operator << (ostream& out, const Fraction_Public& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Fraction_Public& A)
{
	double first, second;
	cout << "Enter a first number of pair: "; in >> first;
	cout << "Enter a second number of pair: "; in >> second;
	A.SetFirst(first); A.SetSecond(second);
	return in;
}
Fraction_Public::operator string() const
{
	stringstream ss;
	ss << "First number of pair is equal to " << this->GetFirst() << endl;
	ss << "Second number of pair is equal to " << this->GetSecond() << endl;
	return ss.str();
}

int Fraction_Public::ComparePairs(const Pair p1, const Pair p2) const
{
	if (p1 > p2)
		return 1;
	if (p1 < p2)
		return 2;
	if (p1 == p2)
		return 3;
}
void Fraction_Public::ComparePairsResult(int result)
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

Fraction_Public& Fraction_Public::operator ++ ()
{
	this->SetFirst(this->GetFirst() + 1);
	return *this;
}
Fraction_Public& Fraction_Public::operator -- ()
{
	this->SetFirst(this->GetFirst() - 1);
	return *this;
}
Fraction_Public Fraction_Public::operator ++ (int)
{
	Fraction_Public t(*this);
	this->SetSecond(this->GetSecond() + 1);
	return t;
}
Fraction_Public Fraction_Public::operator -- (int)
{
	Fraction_Public t(*this);
	this->SetSecond(this->GetSecond() - 1);
	return t;
}