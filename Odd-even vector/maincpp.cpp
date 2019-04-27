#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vector;
	int numbers;
	std::cout << "Upisite brojeve. [0 za izlaz]" << std::endl;
	do
	{
		std::cin >> numbers;
		std::cin.ignore(1000, '\n');
		std::cin.clear();
		vector.push_back(numbers);
	} while (numbers);
	std::cout << "Parni brojevi su: ";
	for (int i = 0; i < vector.size(); i++)
	{
		if (vector[i] % 2 == 0 && vector[i] != 0)
		{
			std::cout << vector[i] << " ";
		}
	}
	std::cout << std::endl;
	std::cout << "Neparni brojevi su: ";
	for (int i = 0; i < vector.size(); i++)
	{
		if (vector[i] % 2 != 0 && vector[i] != 0)
		{
			std::cout << vector[i] << " ";
		}
	}
	std::cin.get();
}