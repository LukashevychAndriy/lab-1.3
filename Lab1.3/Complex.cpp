#include "Complex.h"
#include <iostream>
#include <string>

using namespace std;

void Complex::setX(double x) {
	this->x = x;
}

void Complex::setY(double y) {
	this->y = y;
}

Complex Complex::sub(Complex first, Complex second) {
	Complex newComplex;

	double newComplexX = first.getX() - second.getX();
	double newComplexY = first.getY() - second.getY();

	newComplex.Init(newComplexX, newComplexY);

	return newComplex;
}

Complex Complex::div(Complex first, Complex second) {
	Complex newComplex;

	double firstX = first.getX();
	double firstY = first.getY();
	double secondX = second.getX();
	double secondY = second.getY();

	double newComplexX = (firstX * secondX + firstY * secondY) / (secondX * secondX + secondY * secondY);
	double newComplexY = (secondX * firstY - firstX * secondY) / (secondX * secondX + secondY * secondY);

	newComplex.Init(newComplexX, newComplexY);

	return newComplex;
}

Complex Complex::conj(Complex complex) {
	Complex newComplex;

	double newComplexX = complex.getX();
	double newComplexY = -complex.getY();

	newComplex.Init(newComplexX, newComplexY);

	return newComplex;
}

void Complex::Read() {
	double x;
	double y;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
		
	Init(x, y);
}

void Complex::Init(double x, double y) {
	setX(x);
	setY(y);
}

void Complex::Display() const {
	cout << toString();
}

string Complex::toString() const {
	string str = "(" + to_string(getX()) + ", " + to_string(getY()) + ")";
	return str;
}
