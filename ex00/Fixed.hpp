#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int					value;
		static const int	fractionalBit = 8;
	
	public:
		Fixed(void);
		Fixed(const Fixed& ref);
		~Fixed(void);
		Fixed& operator=(const Fixed& ref);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
