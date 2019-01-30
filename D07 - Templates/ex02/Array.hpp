#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{

  private:
	T *_arr;
	unsigned int _n;

  public:
	Array<T>(void) : _arr(new T()), _n(0)
	{
		return;
	}
	Array<T>(unsigned int n) : _arr(new T[n]), _n(n)
	{
		return;
	}
	Array<T>(const Array &A)
	{
		*this = A;
	}
	~Array<T>(void)
	{
		delete _arr;
	}

	Array<T> &operator=(const Array &A)
	{
		delete _arr;
		_n = A._n;
		_arr = new T[_n];

		for (unsigned int i = 0; i < _n; i++)
		{
			_arr[i] = A._arr[i];
		}
		return *this;
	}
	T operator[](unsigned int i) const
	{
		if (i > _n || i < 0)
		{
			throw std::exception();
		}
		else
		{
			return _arr[i];
		}
	}

	unsigned int size(void) const
	{
		return _n;
	}
};

#endif // end of ARRAY_HPP
