#include <iostream>

int main()
{
	float firstNumber, secondNumber;
	std::cout << "Upisite prvi broj" << std::endl;
	std::cin >> firstNumber;
	std::cin.ignore(1000, '\n');
	std::cin.clear();
	std::cout << "Upisite drugi broj" << std::endl;
	std::cin >> secondNumber;
	std::cin.ignore(1000, '\n');
	std::cin.clear();
	if (secondNumber != 0)
	{
		std::cout << firstNumber << " / " << secondNumber << " = " << firstNumber / secondNumber << std::endl;
	}
	else
	{
		std::cout << "[ERROR] Division by zero " << std::endl;
	}
	std::cin.get();
}