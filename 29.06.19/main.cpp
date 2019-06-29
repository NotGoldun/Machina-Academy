#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <time.h> 



int main()
{
	/*int myNumberArray[4];
	myNumberArray[0] = 5;
	myNumberArray[1] = 7;
	myNumberArray[2] = 8;
	myNumberArray[3] = 2;
	myNumberArray[4] = 10;

	for (size_t i = 0; i < 4; i++)
	{
		std::cout << myNumberArray[i] << std::endl;
	}

	int* myArray = (int*)malloc(4 * sizeof(int));
	myArray[0] = 3;
	myArray[1] = 3;
	myArray[2] = 3;
	myArray[3] = 3;

	for (size_t i = 0; i < 4; i++)
	{
		std::cout << myArray[i] << std::endl;
	}

	int matrix[4][4];

	matrix[0][0] = 5;
	matrix[1][1] = 7;
	matrix[3][2] = 9;

	int threeD[4][4][4];*/

	int size;
	srand(time(NULL));
	while (true)
	{
		std::cout << "Upisite velicinu matrice [mora biti izmedu 2 i 100]" << std::endl;
		std::cin >> size;
		std::cin.ignore(1000, '\n');
		std::cin.clear();
		if (size >= 2 || size <= 100)
		{
			break;
		}
		std::cout << std::endl;
	}
	int myArrayTask[100][100];

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			myArrayTask[i][j] = rand() % 200 + 1 - 100;
		}
	}

	//for (size_t j = 0; j < 100; j++)
	//{
	//	for (size_t i = 0; i < 100; i++)
	//	{
	//		std::cout << myArrayTask[i][j] << "\t";
	//	}
	//	std::cout << std::endl;
	//}


	
	int saveI = 0, saveJ = 0;

	while (true)
	{
		int diagonalA = 0, diagonalB = 0;
	
		for (int i = saveI, j = saveJ; i < size+saveI, j < size + saveJ ;i++, j++)
		{
			diagonalA = myArrayTask[i][j] + diagonalA;
		}
		for (int i = size-1+saveI, j = saveJ; i >= saveI, j < size + saveJ; i--, j++)
		{
			diagonalB = myArrayTask[i][j] + diagonalB;
		}
		if (diagonalA - diagonalB == 0)
		{
			std::cout << "Matrica je najljepsa. " << std::endl;
			std::cout << "Objasnjenje: " << diagonalA << " - " << diagonalB << " = " << diagonalA - diagonalB << std::endl;
			
			for (int j = saveJ; j < size+saveJ; j++)
			{
				for (int i = saveI; i < size+saveI; i++)
				{
					std::cout << myArrayTask[i][j] << "\t";
				}
				std::cout << std::endl;
			}
			break;
		}
		saveJ++;
		if (saveJ > 100 - size)
		{
			saveJ = 0;
			saveI++;
			if (saveI > 100 - size)
			{
				std::cout << "Nema najljepse matrice" << std::endl;
				break;
			}
		}

	}
	

	
	std::cin.get();
}