#ifndef SPAN_HPP
#define SPAN_HPP

#include <set>
#include <iostream>
#include <stdexcept>
#include <cstdlib>

class span
{

  public:
	span(void);
	span(unsigned int);
	span(const span &);
	~span(void);

	span &operator=(const span &);

	int shortestspan(void) const;
	int longestspan(void) const;

	void print(void) const;

	void addNumber(int);

	template <typename Iter>
	void addNumber(Iter from, Iter until)
	{
		while (from != until)
		{
			this->addNumber(*from);
			from++;
		}
	}

  private:
	unsigned int _maxN;
	unsigned int _N;
	bool isZerospan;

	std::set<int> _S;

	bool checkCapacity(void);
};

#endif // end of SPAN_HPP
