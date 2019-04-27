#include <iostream>

int leapYear(int firstYear, int secondYear)
{
	if (((firstYear % 4 == 0) && (firstYear % 100 != 0)) || ((firstYear % 100 == 0) && (firstYear % 400 == 0)))
	{
		std::cout << firstYear << std::endl;
	}
	if (firstYear > secondYear)
	{
		return 0;
	}
	else
	{
		return leapYear(firstYear + 1, secondYear);
	}
}

int main()
{
	int firstYear, secondYear;

	std::cout << "Upisite prvu godinu" << std::endl;
	std::cin >> firstYear;
	std::cin.ignore(1000, '\n');
	std::cin.clear();

	std::cout << "Upisite drugu godinu" << std::endl;
	std::cin >> secondYear;
	std::cin.ignore(1000, '\n');
	std::cin.clear();

	std::cout << "Prijestupne godine u ovom intervalu su: " << std::endl;

	if (firstYear > secondYear)
	{
		leapYear(secondYear, firstYear);
	}
	else
	{
		leapYear(firstYear, secondYear);
	}
	std::cin.get();
}