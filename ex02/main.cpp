#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed const c(Fixed(3.0f) * Fixed(7));
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << c << std::endl;
	std::cout << ++a << std::endl;
	std::cout << Fixed::min( a, c ) << std::endl;
	std::cout << a + c << std::endl;
	std::cout << a - c << std::endl;
	std::cout << a * c << std::endl;
	std::cout << a / c << std::endl;

	return 0;
}

