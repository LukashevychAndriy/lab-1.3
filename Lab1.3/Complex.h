#pragma once
#include <string>

class Complex
{
private:
	double x;
	double y;
public:
	double getX() const { return x; };
	double getY() const { return y; };

	void setX(double);
	void setY(double);

	Complex sub(Complex, Complex);
	Complex div(Complex, Complex);
	Complex conj(Complex);

	void Init(double x, double y);
	void Read();
	void Display() const;
	std::string toString() const;
};
