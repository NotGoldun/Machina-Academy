#include <iostream>

int main()
{
	int firstAngle, secondAngle, thirdAngle;
	std::cout << "Upisite prvi kut trokuta: " << std::endl;
	std::cin >> firstAngle;
	std::cin.ignore(1000, '\n');
	std::cin.clear();
	std::cout << "Upisite drugi kut trokuta: " << std::endl;
	std::cin >> secondAngle;
	std::cin.ignore(1000, '\n');
	std::cin.clear();
	std::cout << "Upisite treci kut trokuta: " << std::endl;
	std::cin >> thirdAngle;
	std::cin.ignore(1000, '\n');
	std::cin.clear();
	if (firstAngle + secondAngle + thirdAngle == 180)
	{
		std::cout << "Moguce je napraviti trokut." << std::endl;
	}
	else
	{
		std::cout << "Nije moguce napraviti trokut." << std::endl;
	}
	std::cin.get();
}