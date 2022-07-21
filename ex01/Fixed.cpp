#include "Fixed.hpp"

Fixed::Fixed(void)
	:value(0)
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(const int n)
	:value(n << this->fractionalBit)
{
	std::cout << "Int constructor called." << std::endl;
}

Fixed::Fixed(const float f)
	:value(roundf(f * (1 << this->fractionalBit)))
{
	std::cout << "Float constructor called." << std::endl;
}

Fixed::Fixed(const Fixed& ref)
{
	std::cout << "copy constructor called." << std::endl;
	*this = ref;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called." << std::endl;
}
int	Fixed::getRawBits(void) const
{
	return (this->value);
}

void	Fixed::setRawBits(const int raw)
{
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	return (float(this->value) / float(1 << this->fractionalBit));
}

int	Fixed::toInt(void) const
{
	return (this->value >> this->fractionalBit);
}

Fixed& Fixed::operator=(const Fixed& ref)
{
	std::cout << "copy assignment operator called." << std::endl;
    this->value = ref.getRawBits();
    return (*this);
}

std::ostream& operator<<(std::ostream& out, const Fixed& ref)
{
	out << ref.toFloat();
	return (out);
}
