#include "Triangle.h"

int main()
{
	Triad triad(-20.7, 12.3, 0.5);
	cout << "Sum = " << triad.Sum() << endl;

	Triad M;
	cin >> M;
	cout << M << endl;

	Triad N = M;
	cout << N << endl;
	
	cout << "Size = " << sizeof(N) << endl; 
	double A = 0.0;
	double B = 0.0;
	double C = 0.0;

	Triangle T(3, 4, 5);
	cout << "Square = " << T.Square() << endl;

	T.Angle(A, B, C);
	cout << "Angle A = " << A << endl;
	cout << "Angle B = " << B << endl;
	cout << "Angle C = " << C << endl;

	cout << "Size = " << sizeof(T) << endl;
}