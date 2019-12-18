#pragma once
#include <iostream>;

using namespace std;

class Fraction
{
	int num = 0;
	int denom = 1;
public:
	Fraction();
	Fraction(int num, int denom);
	void setNum(int val);
	void setDenom(int val);
	int getNum()const;
	int getDenom()const;
	int NOD(int val1, int val2);
	int NOK(int val1, int val2);
	Fraction reduction(const Fraction& obj);
	void show();
	Fraction operator +(const Fraction& obj);
	Fraction operator -(const Fraction& obj);
	Fraction operator*(const Fraction& obj);
	Fraction operator/(const Fraction& obj);
	bool operator ==(const Fraction& obj);
	bool operator !=(const Fraction& obj);
	bool operator >(const Fraction& obj);
	bool operator <(const Fraction& obj);
	bool operator <=(const Fraction& obj);
	bool operator >=(const Fraction& obj);

};