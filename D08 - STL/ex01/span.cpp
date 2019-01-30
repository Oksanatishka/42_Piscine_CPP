#include "span.hpp"

span::span(void)
{
	return;
}
span::span(unsigned int n) : _maxN(n),
							 _N(0),
							 isZerospan(false)
{
	if (n <= 1)
		throw(std::length_error("ERROR: you cannot create span with size less then or equal to 1!"));
}
span::span(const span &toCopy)
{
	*this = toCopy;
}
span::~span(void)
{
	return;
}
span &span::operator=(const span &toCopy)
{
	static_cast<void>(toCopy);

	return *this;
}

bool span::checkCapacity(void)
{
	if (_N < _maxN)
	{
		_N++;
		return true;
	}
	else
	{
		throw(std::overflow_error("ERROR: maximum storage capacity have been reached"));
		return false;
	}
}

int span::shortestspan(void) const
{
	if (_N < 2)
		throw(std::length_error("ERROR: in your span container less then two members, so I cannot calculate any span!"));
	if (isZerospan)
		return 0;

	std::set<int>::iterator i = _S.begin();
	int shortest;
	int tmp;

	shortest = abs(*i - *(++i));
	while (i != _S.end())
	{
		tmp = abs(*i - *(++i));

		if (tmp < shortest)
			shortest = tmp;
	}

	return shortest;
}
int span::longestspan(void) const
{
	if (_N < 2)
		throw(std::length_error("ERROR: in your span container less then two members, so I cannot calculate any span!"));

	return (*_S.rbegin() - *_S.begin());
}

void span::addNumber(int n)
{
	if (checkCapacity() == false)
		return;

	if ((_S.insert(n)).second == false)
		isZerospan = true;
}

void span::print(void) const
{
	std::cout << "span contains " << _N << " element(s) with the limit of " << _maxN << " elements." << std::endl;
	std::cout << "Element(s) itself:" << std::endl;
	for (std::set<int>::iterator it = _S.begin(); it != _S.end(); ++it)
	{
		std::cout << ' ' << *it;
	}
	std::cout << std::endl
			  << "Meanwhile isZerospan = " << ((isZerospan) ? "true" : "false") << std::endl;
}
