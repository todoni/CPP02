#include "Fixed.hpp"

int main(void)
{
	//std::cout << Fixed::getRawBits() << std::endl; //이런거 안됨
	std::cout << Fixed::max(Fixed(42.42f), Fixed(-0.42f)) << std::endl; //이건 됨 (static member function)

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << a.max( a, b ) << std::endl;

	const Fixed c(Fixed(3.0f) * Fixed(7));
	std::cout << "current  a " << a << std::endl;
	std::cout << "result --a " << --a << std::endl;
	std::cout << "current  a " << a << std::endl;
	std::cout << "result a-- " << a-- << std::endl;
	std::cout << "current  a " << a << std::endl;
	std::cout << "result ++a " << ++a << std::endl;
	std::cout << "current  a " << a << std::endl;
	std::cout << "result a++ " << a++ << std::endl;
	std::cout << "current  a " << a << std::endl;
	
	std::cout << "min(a,c) " << Fixed::min( a, c ) << std::endl;
	
	Fixed	aPrev = a;
	Fixed	cPrev = c;
	std::cout << "a     " << aPrev << std::endl;
	std::cout << "c     " << cPrev << std::endl;
	std::cout << "a + c " << a + c << std::endl;
	if (aPrev == a && cPrev == c)
		std::cout << "a and c remain same" << std::endl;
	else
		std::cout << "arithmetic operation changes original value. Wrong implementation." << std::endl;
	std::cout << "a - c " << a - c << std::endl;
	if (!(aPrev != a) && !(cPrev != c))
		std::cout << "a and c remain same" << std::endl;
	else
		std::cout << "arithmetic operation changes original value. Wrong implementation." << std::endl;
	std::cout << "a * c " << a * c << std::endl;
	std::cout << "a / c " << a / c << std::endl;
	std::cout << Fixed(3.0f) * Fixed(4) << ">=" << (Fixed(0) / Fixed(0.01f));
	if ((Fixed(3.0f) * Fixed(4)) >= (Fixed(0) / Fixed(0.01f)))
		std::cout << " it's true" << std::endl;
	else
		std::cout << "You did something wrong" << std::endl;

	Fixed d(0.0f);
	
	Fixed asdf = a / d;
	std::cout << a << std::endl;
	std::cout << a * d << std::endl;
	std::cout << asdf << std::endl;
	
	std::cout << Fixed::min(a, d) << std::endl;
	std::cout << Fixed::max(a, d) << std::endl;
	return 0;
}

