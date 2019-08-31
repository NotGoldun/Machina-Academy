#include <iostream>

int main() 
{
	//int firstNumber, secondNumber;
	//
	//std::cout << "Upisite dva prirodna broja: " << std::endl;
	//std::cout << "Prvi broj: ";
	//std::cin >> firstNumber;
	//std::cin.ignore(1000, '\n');
	//std::cin.clear();
	//std::cout << std::endl;
	//std::cout << "Drugi broj: ";
	//std::cin >> secondNumber;
	//std::cin.ignore(1000, '\n');
	//std::cin.clear();
	//std::cout << std::endl;

	//int MAX;
	//int divisionNumber = 2;

	//if (firstNumber > secondNumber)
	//{
	//	MAX = secondNumber;
	//}
	//else
	//{
	//	MAX = firstNumber;
	//}

	//while (divisionNumber <= MAX)
	//{
	//	if (firstNumber % divisionNumber == 0 && secondNumber % divisionNumber == 0)
	//	{
	//		std::cout << "Brojevi " << firstNumber << " i " << secondNumber << " nisu relativno prosti" << std::endl;
	//		std::cin.get();
	//		return 0;
	//	}
	//	else
	//	{
	//		divisionNumber++;
	//	}
	//}

	//
	//std::cout << "Brojevi " << firstNumber << " i " << secondNumber << " su relativno prosti" << std::endl;

	//int thirdNumber;
	//int secondDivisionNumber = 2;

	//std::cout << "Upisite prirodni broj: ";
	//std::cin >> thirdNumber;
	//std::cin.ignore(1000, '\n');
	//std::cin.clear();
	//std::cout << std::endl;
	//
	//while (secondDivisionNumber < thirdNumber)
	//{
	//	if (thirdNumber % secondDivisionNumber == 0)
	//	{
	//		std::cout << "Broj " << thirdNumber << " nije prost broj" << std::endl;
	//		std::cin.get();
	//		return 0;
	//	}
	//	else
	//	{
	//		secondDivisionNumber++;
	//	}
	//}
	//std::cout << "Broj " << thirdNumber << " je prost broj" << std::endl;

	int fourthNumber;
	std::cout << "Upisite prirodni broj: ";
	std::cin >> fourthNumber;
	std::cin.ignore(1000, '\n');
	std::cin.clear();
	std::cout << std::endl;

	if (fourthNumber % 2 == 0 || fourthNumber % 3 == 0 || fourthNumber % 5 == 0 || fourthNumber % 7 == 0)
	{
		std::cout << "Broj " << fourthNumber << " nije prost broj" << std::endl;
	}
	else
	{
		std::cout << "Broj " << fourthNumber << " je prost broj" << std::endl;
	}

	std::cin.get();
}