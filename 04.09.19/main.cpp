#include <iostream>
#include <string>

class byte
{
public:

	byte operator+(byte other)
	{
		byte result;
		result._value = _value + other._value;
		return result;
	}

	byte operator++(int)
	{
		byte result;
		result._value = ++_value;
		return result;
	}



	friend std::ostream &operator<<(std::ostream &out, const byte &current)
	{
		out << current._value;
		return out;
	}

	friend std::istream &operator>>(std::istream &in, byte &current)
	{
		int temp;
		in >> temp;

		if (temp > std::numeric_limits<char>::max())
		{
			std::cout << "[ERROR] char numeric limit reached!" << std::endl;
		}
		else
		{
			current._value = temp;
			std::cin.ignore(1000, '\n');
			std::cin.clear();
			return in;
		}
	}
	
private:
	char _value;
};

int main()
{
	byte a, b;
	std::cin >> a >> b;
	byte c = a + b;
	std::cout << c++ << std::endl;
	system("PAUSE");
}

