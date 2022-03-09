
#ifndef DATA_HPP
# define DATA_HPP

class Data
{
	private:
		int	_value;

		Data(const Data &data);
		Data	&operator=(const Data &data);
		
	public:
		Data(void);
		virtual ~Data();

		int	getValue(void) const;
};

# endif