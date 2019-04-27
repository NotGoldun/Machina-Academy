#include <iostream>

int fibonacciFunction(int firstNumber, int secondNumber, int counter)
{
	if (counter == 0)
	{
		return 0;
	}
	else
	{
		std::cout << secondNumber << std::endl;
		return fibonacciFunction(secondNumber, firstNumber + secondNumber, counter - 1);
	}
}

int main()
{
	int fibonacciCounter;
	std::cout << "Upisite koliko znamenki fibonaccijevog reda zelite ispisati " << std::endl;
	std::cin >> fibonacciCounter;
	std::cin.ignore(1000, '\n');
	std::cout << "Fibonaccijevi brojevi su:" << std::endl;
	fibonacciFunction(0, 1, fibonacciCounter);
	std::cin.clear();
	std::cin.get();
}