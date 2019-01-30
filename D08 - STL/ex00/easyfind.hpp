#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <vector>
#include <list>
#include <deque>

template <typename T>
typename T::iterator easyfind(T &t, int toFind)
{
	typename T::iterator it = std::find(t.begin(), t.end(), toFind);

	if (it == t.end() && *it != toFind)
		throw(std::exception());

	return it;
}
