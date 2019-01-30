#include <string>
#include <iostream>
#include <limits>
#include <climits>
#include <cstdlib>
#include <ctime>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void *serialize(void)
{
	Data *d = new Data;
	const char alphanum[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	const std::size_t l = strlen(alphanum);
	int i = -1;

	srand(time(NULL));
	while (++i < 8)
	{
		d->s1 += alphanum[rand() % l];
	}
	d->n = static_cast<int>(rand() % std::numeric_limits<unsigned int>::max());
	i += 4;
	while (++i < 20)
	{
		d->s2 += alphanum[rand() % l];
	}
	return reinterpret_cast<void *>(d);
}

Data *deserialize(void *raw)
{
	Data *d = reinterpret_cast<Data *>(raw);

	return d;
}

int main(void)
{
	void *s;
	Data *d;

	for (int i = 0; i < 4; i++)
	{
		s = serialize();
		d = deserialize(s);
		std::cout << d->s1 << std::endl;
		std::cout << d->n << std::endl;
		std::cout << d->s2 << std::endl;
		std::cout << std::endl;
	}
}
