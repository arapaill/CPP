#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int					_value;
        static const int	_fract = 8;
    public:
		Fixed();
		Fixed(Fixed const &src);
		~Fixed();
		Fixed	&operator=(const Fixed&fixed);
		int		getRawBits(void) const;
		void	setRawBits(const int raw);

};

#endif