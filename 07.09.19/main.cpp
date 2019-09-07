#include <iostream>

class fraction
{
public:
	fraction operator+(fraction other)
	{
		fraction result;
		int MIN, MAX;
		if (_nazivnik > other._nazivnik)
		{
			MAX = _nazivnik;
			MIN = other._nazivnik;
		}
		else
		{
			MIN = _nazivnik;
			MAX = other._nazivnik;
		}
		result._nazivnik = _nazivnik * other._nazivnik;
		result._brojnik = _brojnik * other._nazivnik + other._brojnik * _nazivnik;
		return result;
	}

	friend std::ostream &operator<<(std::ostream& out, const fraction &current)
	{
		out << current._brojnik;
		out << "/";
		out << current._nazivnik;
		return out;
	}
	friend std::istream &operator>>(std::istream& in, fraction &current)
	{
		in >> current._brojnik;
		in >> current._nazivnik;
		return in;
	}


private:
	int _brojnik;
	int _nazivnik;
};


int main()
{
	fraction f1, f2;
	std::cin >> f1 >> f2;
	fraction f3 = f1 + f2;
	std::cout << f3 << std::endl;
	system("PAUSE");
}