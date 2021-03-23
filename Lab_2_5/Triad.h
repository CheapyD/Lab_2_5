#pragma once
#pragma pack(1)
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Triad
{
private:
	double a, b, c;

public:
	double GetA() const { return a; }
	double GetB() const { return b; }
	double GetC() const { return c; }

	void SetA(double value) { a = value; }
	void SetB(double value) { b = value; }
	void SetC(double value) { c = value; }

	Triad();
	Triad(const double a, const double b, const double c);
	Triad(const Triad& s);
	~Triad(void);

	Triad& operator = (const Triad& s);
	operator string () const;

	friend ostream& operator << (ostream& out, const Triad& s);
	friend istream& operator >> (istream& in, Triad& s);

	Triad& operator ++ ();
	Triad& operator -- ();
	Triad operator ++ (int);
	Triad operator -- (int);

	double Sum();
};

