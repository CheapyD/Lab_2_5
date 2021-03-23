#pragma once
#pragma pack(1)
#include "Triad.h"

class Triangle
{
private:
	Triad triad;

public:
	double GetA() const { return triad.GetA(); }
	double GetB() const { return triad.GetB(); }
	double GetC() const { return triad.GetC(); }

	void SetA(double value);
	void SetB(double value);
	void SetC(double value);

	Triangle(const double a = 0, const double b = 0, const double c = 0);
	Triangle(const Triangle& s);
	~Triangle(void);

	Triangle& operator = (const Triangle& s);
	operator string () const;

	friend ostream& operator << (ostream& out, const Triangle& s);
	friend istream& operator >> (istream& in, Triangle& s);

	Triangle& operator ++ ();
	Triangle& operator -- ();
	Triangle operator ++ (int);
	Triangle operator -- (int);

	double Square() const;
	void Angle(double& A, double& B, double& C) const;
};

