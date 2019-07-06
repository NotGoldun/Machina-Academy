#include <iostream>
#include <vector>
#include <time.h>

int main()
{
	srand(time(NULL));
	std::vector<int> numbersVector;
	int size;
	int sub;
	int numberOfSubs = 0;
	std::cout << "Upisite velicinu niza koji ispitujete: " << std::endl;
	std::cin >> size;
	std::cin.ignore(1000, '\n');
	std::cin.clear();
	std::cout << "Upisite razliku koju trazite: " << std::endl;
	std::cin >> sub;
	std::cin.ignore(1000, '\n');
	std::cin.clear();
	for (int i = 0; i < size; i++)
	{
		numbersVector.push_back(rand() % 100 + 1);
	}
	std::cout << "Brojevi koji odgovaraj razlici su: " << std::endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (abs(numbersVector[i] - numbersVector[j] == sub))
			{
				numberOfSubs++;
				std::cout << numbersVector[i] << " and " << numbersVector[j] << std::endl;
			}
		}
	}
	std::cout << "Broj brojeva koji odgovaraju razlici : " << numberOfSubs << std::endl;
	std::cin.get();

}