#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;
	/*int givenNumerator_;
	int givenDenominator_;*/
	/*void saveCrossProducts(const Fraction& other)
	{
		givenNumerator_ = this->numerator_ * other.denominator_;
		givenDenominator_ = other.numerator_ * this->denominator_;
	}*/

public:
	//Fraction();
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	bool operator == (const Fraction& other) const
	{
		//saveCrossProducts(other);
		/*givenNumerator_ = this->numerator_ * other.denominator_;
		givenDenominator_ = other.numerator_ * this->denominator_;*/
		return this->numerator_ * other.denominator_ == other.numerator_ * this->denominator_;
	}
	bool operator != (const Fraction& other) const
	{//saveCrossProducts(other);
		/*givenNumerator_ = this->numerator_ * other.denominator_;
		givenDenominator_ = other.numerator_ * this->denominator_;*/
		return !(*this==other );
	}
	bool operator < (const Fraction& other) const
	{
		//saveCrossProducts(other);
		/*givennumerator_ = this->numerator_ * other.denominator_;
		givendenominator_ = other.numerator_ * this->denominator_;*/
		return this->numerator_ * other.denominator_ < other.numerator_* this->denominator_;
		//return this->givenNumerator_ < other.givenNumerator_ ;
	}
	bool operator > (const Fraction& other) const
	{
		//saveCrossProducts(other);

		return  other <  *this;
	}
	bool operator <= (const Fraction& other) const
	{
		//saveCrossProducts(other);
		return !(*this > other);
	}
	bool operator >= ( Fraction& other)
	{
		//saveCrossProducts(other);
		return !(*this < other);
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