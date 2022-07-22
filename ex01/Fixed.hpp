#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					value;
		static const int	fractionalBit = 8;
	
	public:
		Fixed(void);
		Fixed(const Fixed& ref);
		Fixed(const int);
		Fixed(const float);
		
		~Fixed(void);
		Fixed& operator=(const Fixed& ref);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		double	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& ref);

#endif
