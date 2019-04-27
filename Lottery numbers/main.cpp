#include <iostream>
#include <time.h>
#include <cstdlib>


int main()
{
	int lotteryNumbers[7];
	int userNumbers[7];
	int counter = 0;
	for (int i = 0; i < 7;)
	{
		std::cout << "Upisite " << i + 1 << ". od sedam brojeva lutrije. Broj mora biti izmedu 1 i 49." << std::endl;
		std::cin >> userNumbers[i];
		std::cin.ignore(1000, '\n');
		std::cin.clear();
		if (userNumbers[i] < 1 || userNumbers[i] > 49)
		{
			std::cout << "Unesen pogresan broj." << std::endl;
		}
		else
		{
			i++;
		}

	}
	srand(time(NULL));
	for (int i = 0; i < 7; i++)
	{
		lotteryNumbers[i] = rand() % 49 + 1;
	}
	std::cout << "Vasi brojevi su: ";
	for (int i = 0; i < 7; i++)
	{
		std::cout << userNumbers[i] << "  ";
	}
	std::cout << std::endl;
	std::cout << "Dobitni brojevi su: ";
	for (int i = 0; i < 7; i++)
	{
		std::cout << lotteryNumbers[i] << "  ";
	}

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (userNumbers[i] == lotteryNumbers[j])
			{
				counter++;
			}
		}
	}
	std::cout << std::endl;
	std::cout << "Broj pogodaka: " << counter << std::endl;
	std::cin.get();
}