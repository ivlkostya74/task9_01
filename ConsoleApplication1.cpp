#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;
	int givenNumerator_;
	int givenDenominator_;
	void saveCrossProducts(const Fraction& other)
	{
		givenNumerator_ = this->numerator_ * other.denominator_;
		givenDenominator_ = other.numerator_ * this->denominator_;
	}

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	bool operator == (const Fraction& other)
	{
		saveCrossProducts(other);
		return givenNumerator_ == Fraction::givenDenominator_;
	}
	bool operator != (const Fraction& other)
	{
		saveCrossProducts(other);
		return givenNumerator_ != Fraction::givenDenominator_;
	}
	bool operator < (const Fraction& other)
	{
		saveCrossProducts(other);
		return givenNumerator_ <  Fraction::givenDenominator_;
	}
	bool operator> (const Fraction& other)
	{
		saveCrossProducts(other);
		return givenNumerator_ > Fraction::givenDenominator_;
	}
	bool operator <= (const Fraction & other)
	{
		saveCrossProducts(other);
		return givenNumerator_ <= Fraction::givenDenominator_;
	}
	bool operator >= (const Fraction& other)
	{
		saveCrossProducts(other);
		return givenNumerator_ >= Fraction::givenDenominator_;
	}
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}