#include <iostream>

int fibonacciFunction(int firstNumber, int secondNumber, int fibonacciCounter, int fibonacciNumber, int counter)
{
	if (fibonacciCounter == 0)
	{
		return 0;
	}
	else if (counter == fibonacciNumber)
	{
		std::cout << secondNumber << std::endl;
		return fibonacciFunction(secondNumber, firstNumber + secondNumber, fibonacciCounter - 1, fibonacciNumber, counter);
	}
	else
	{
		return fibonacciFunction(secondNumber, firstNumber + secondNumber, fibonacciCounter, fibonacciNumber, counter + 1);
	}
}

int main()
{
	int fibonacciNumber;
	std::cout << " Upisite od kojeg broje zelite ispisati 30 znamenka Fibonaccijevog niza " << std::endl;
	std::cin >> fibonacciNumber;
	std::cin.ignore(1000, '\n');
	std::cin.clear();
	std::cout << " Fibonacijevi brojevi u: " << std::endl;
	fibonacciFunction(0, 1, 30, fibonacciNumber, 0);
	std::cin.get();
}