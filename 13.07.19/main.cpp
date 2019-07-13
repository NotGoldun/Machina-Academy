#include <iostream>

int sumDigits(int number)
{
	int sum = 0;
	while (number != 0)
	{
		sum  += number % 10;
		number /= 10;
	}
	return sum;
}

int main()
{
	int firstNumber, secondNumber;
	std::cout << "Upisite prvi broj: " << std::endl;
	std::cin >> firstNumber;
	std::cin.ignore(1000, '\n');
	std::cin.clear();
	std::cout << "Upisite drugi broj: " << std::endl;
	std::cin >> secondNumber;
	std::cin.ignore(1000, '\n');
	std::cin.clear();

	if (sumDigits(firstNumber) == sumDigits(secondNumber))
	{
		std::cout << "Brojevi " << firstNumber << " i " << secondNumber << " imaju isti zbroj znamenki i on iznosi: " << sumDigits(firstNumber) << std::endl;
	}
	else
	{
		std::cout << "Brojevi " << firstNumber << " i " << secondNumber << " nemaju isti zbroj znamenki." << std::endl;

	}

	std::cin.get();
}