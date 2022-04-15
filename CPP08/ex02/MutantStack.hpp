#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	private:
		
	public:
		MutantStack(void);
		MutantStack(const MutantStack &mstack);
		virtual ~MutantStack();

		MutantStack	&operator=(const MutantStack<T> &mstack);

		typedef	typename std::stack<T>::container_type container_type;
		typedef typename container_type::iterator iterator;
		typedef typename container_type::const_iterator const_iterator;
		typedef typename container_type::reverse_iterator reverse_iterator;
		typedef typename container_type::const_reverse_iterator const_reverse_iterator;
		iterator begin()
		{
			return (std::stack<T>::c.begin());
		}
		iterator end()   
		{
			return (std::stack<T>::c.end());
		}
		reverse_iterator rbegin()
		{
			return (std::stack<T>::c.rbegin());
		}
		reverse_iterator rend()
		{
			return (std::stack<T>::c.rend());
		}

		const_iterator cbegin() const
		{
			return (std::stack<T>::c.begin());
		}
		const_iterator cend() const
		{
			return (std::stack<T>::c.end());
		}
		const_reverse_iterator rbegin() const
		{
			return (std::stack<T>::c.rbegin());
		}
		const_reverse_iterator rend() const
		{
			return (std::stack<T>::c.rend());
		}

};

template<typename T> MutantStack<T>::MutantStack(void)
{
	return ;
}

template<typename T> MutantStack<T>::MutantStack(const MutantStack<T> &mstack)
{
	*this = mstack;
}

template<typename T> MutantStack<T>::~MutantStack()
{
	return ;
}

template<typename T> MutantStack<T>	&MutantStack<T>::operator=(const MutantStack &mstack)
{
	if (*this != mstack)
		static_cast< std::stack<T> >(*this) = static_cast< std::stack<T> >(mstack);
	return (*this);
}
#endif