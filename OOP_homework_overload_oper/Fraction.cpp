#include "Fraction.h"



Fraction::Fraction() = default;


Fraction::Fraction(int num, int denom)
{
	if (denom == 0)
		return;
	else
	{
		this->num = num;
		this->denom = denom;
	}
}
int Fraction::NOD(int val1, int val2)
{
	{
		int c;
		while (val2) {
			c = val1 % val2;
			val1 = val2;
			val2 = c;
		}
		cout << val1 << endl;
		return val1;

	}
}

int Fraction::NOK(int val1, int val2)
{
	int nok = 1;
	int max = val1 > val2 ? val1 : val2;
	for (int i = max; ; i = i + max)

	{
		if (i % val1 == 0 && i % val2 == 0)
		{
			nok = i;
			break;
		}
	};
	cout << nok << endl;
	return nok;
	
}

void Fraction::setNum(int val)
{
	num = val;
}

void Fraction::setDenom(int val)
{
	denom = val;
}

int Fraction::getNum() const
{
	return num;
}

int Fraction::getDenom() const
{
	return denom;
}

Fraction Fraction::reduction(const Fraction& obj)
{
		int c = NOD(obj.num,obj.denom);
		int rnum = obj.num/c;
		int rdenom = obj.denom/c;
		// reduction получить новую дробь?
		return Fraction(rnum, rdenom);
}

void Fraction::show()
{
	cout << "Your Fraction =  " << num << "/" << denom << endl;
}



Fraction Fraction::operator+(const Fraction & obj)
{
	int a, b;
	int c = NOK(denom, obj.denom);
	a = c / denom;
	b = c / obj.denom;
	int sumnum = (num * a) + (obj.num * b);
	int sumdenom = c;

	return Fraction(sumnum, sumdenom);
}

Fraction Fraction::operator-(const Fraction & obj)
{
	int a, b;
	int c = NOK(denom, obj.denom);
	a = c / denom;
	b = c / obj.denom;
	int subnum = (num * a)-(obj.num*b);
	int subdenom = c;

	return Fraction(subnum, subdenom);
}

Fraction Fraction::operator*(const Fraction & obj)
{
	int prodnum = num * obj.num;
	int proddenom = denom * obj.denom;
	return Fraction(prodnum, proddenom);
}

Fraction Fraction::operator/(const Fraction & obj)
{
	int divisionnum = num * obj.denom;
	int pdivisiondenom = denom * obj.num;
	return Fraction(divisionnum, pdivisiondenom);
}

bool Fraction::operator==(const Fraction & obj)
{
	return *this == obj;
	// нужно ли сокращать дроби?
}
bool Fraction::operator!=(const Fraction& obj)
{
	return !(reduction(*this) == reduction(obj));
}
bool Fraction::operator>(const Fraction & obj)
{
	return false;
}

bool Fraction::operator<(const Fraction & obj)
{
	return false;
}

bool Fraction::operator<=(const Fraction & obj)
{
	return false;
}

bool Fraction::operator>=(const Fraction & obj)
{
	return false;
}
