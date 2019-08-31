#include <iostream>

int factorialSUM(int number)
{
	int SUM = 0;
	int factorialNumber;
	while (number != 0)
	{
		factorialNumber = number % 10;
		int factorial = 1;
		while (factorialNumber > 0)
		{
			factorial *= factorialNumber;
			factorialNumber--;
		}
		SUM += factorial;
		number /= 10;
	}
	return SUM;
}

int main()
{
	int number = 2;
	//std::cout << "Upisite broj: ";
	//std::cin >> number;
	//std::cin.ignore(1000, '\n');
	//std::cin.clear();
	while (number < 100000)
	{
		if (factorialSUM(number) == number)
		{
			std::cout << "Broj " << number << " je jak broj" << std::endl;
		}
		//else
		//{
		//	std::cout << "Broj " << number << " nije jak broj" << std::endl;
		//}
		number++;
	}
	std::cin.get();
}