#include "Fixed.hpp"

Fixed::Fixed(void)
	:value(0)
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(const Fixed& ref)
{
	std::cout << "copy constructor called." << std::endl;
	*this = ref;
}

Fixed::~Fixed(void)
{
	std::cout << "Default distructor called." << std::endl;
}
int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member funtion called." << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(const int raw)
{
	this->value = raw;
}

Fixed& Fixed::operator=(const Fixed& ref)
{
	std::cout << "copy assignment operator called." << std::endl;
    this->value = ref.getRawBits();
    return (*this);
}
