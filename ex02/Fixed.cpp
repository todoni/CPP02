#include "Fixed.hpp"

Fixed::Fixed(void)
	:value(0)
{
}

Fixed::Fixed(const int n)
	:value(n << this->fractionalBit)
{
}

Fixed::Fixed(const float f)
	:value(roundf(f * (1 << this->fractionalBit)))
{
}

Fixed::Fixed(const Fixed& ref)
{
	*this = ref;
}

Fixed::~Fixed(void)
{
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
	return (float(this->value) / (1 << this->fractionalBit));
}

int	Fixed::toInt(void) const
{
	return (this->value >> this->fractionalBit);
}

Fixed& Fixed::operator=(const Fixed& ref)
{
	if (this != &ref)
    	this->value = ref.getRawBits();
    return (*this);
}

std::ostream& operator<<(std::ostream& out, const Fixed& ref)
{
	out << ref.toFloat();
	return (out);
}

bool	Fixed::operator>(const Fixed& ref) const
{
	return (this->getRawBits() > ref.getRawBits());
}

bool	Fixed::operator>=(const Fixed& ref) const
{
	return (this->getRawBits() >= ref.getRawBits());
}

bool	Fixed::operator<(const Fixed& ref) const
{
	return (this->getRawBits() < ref.getRawBits());

}

bool	Fixed::operator<=(const Fixed& ref) const
{
	return (this->getRawBits() <= ref.getRawBits());
}

bool	Fixed::operator==(const Fixed& ref) const
{
	return (this->getRawBits() == ref.getRawBits());
}

bool	Fixed::operator!=(const Fixed& ref) const
{
	return (this->getRawBits() != ref.getRawBits());
}

Fixed	Fixed::operator+(const Fixed& ref)
{
	this->setRawBits(this->getRawBits() + ref.getRawBits());	
	return (*this);
}

Fixed	Fixed::operator-(const Fixed& ref)
{
	this->setRawBits(this->getRawBits() - ref.getRawBits());	
	return (*this);
}

Fixed	Fixed::operator*(const Fixed& ref)
{
	this->setRawBits(this->getRawBits() * ref.getRawBits() / (1 << this->fractionalBit));	
	return (*this);
}

Fixed	Fixed::operator/(const Fixed& ref)
{
	this->setRawBits(this->getRawBits() / ref.getRawBits());	
	return (*this);
}

Fixed	Fixed::operator++()
{
	++this->value;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	++this->value;
	return (tmp);

}

Fixed	Fixed::operator--()
{
	--this->value;
	return (*this);
}
Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	--this->value;
	return (tmp);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (b);
	return (a);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (b);
	return (a);
}
