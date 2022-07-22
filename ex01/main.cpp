#include "Fixed.hpp"
#include <iomanip>

int main(void)
{
	Fixed		a;
	Fixed const	b( 10 );
	Fixed const	c( 42.42f );
	Fixed const	d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	Fixed e(0.01f);
	Fixed f(0.01234f);
	Fixed g(0.001234f);
	
	std::cout << "e is " << e << std::endl;
	std::cout << "f is " << f << std::endl;
	std::cout << "g is " << g << std::endl;
	std::cout << "e is " << e.toInt() << " as integer" << std::endl;
	std::cout << "f is " << f.toInt() << " as integer" << std::endl;
	std::cout << "g is " << g.toInt() << " as integer" << std::endl;

	static const int frac = 28;
	int			aa = (roundf(42.42f * (1 << frac)));
	int			aaa = 10 << frac;
	int			bb = 1 << frac;;
	
	std::cout << std::setprecision(28);
	std::cout << "overflow when implicit conversion aa:" << aa << std::endl;
	std::cout << "int overflow                     aaa:" << aaa << std::endl;
	std::cout << "bb " << bb << std::endl;
	std::cout << "aa / bb " << aa / bb << std::endl;
	std::cout << "aaa / bb " << aaa / bb << std::endl;

	return 0;	
}
