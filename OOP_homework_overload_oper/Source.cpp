#include "Fraction.h"


int main()
{
	{
		Fraction a(7, 8);
		Fraction b(15, 20);
		Fraction c(3, 5);
		Fraction d(7, 8);

		a.show();
		b.show();
		a.reduction(b);
		b.show();
		c.show();

		Fraction sum = a + b + c;
		sum.show();
		Fraction subtraction = a - b-c;
		subtraction.show();
		Fraction division = a / b;
		division.show();
		cout << (b == c) << endl;

		}
	system("pause");
}