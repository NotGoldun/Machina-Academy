#include <iostream>

int main()
{
	uint32_t arr[] = { 10,17,13,15 };
	for (int i = 0; arr[i] != '\0' ; i++)
	{
		if (arr[i] % 2 != 0 && arr[i] % 3 != 0 && arr[i] % 5 != 0 && arr[i] % 7 != 0)
		{
			std::cout << "Prvi prost broj je:" << arr[i] << std::endl;
			std::cin.get();
			return 0;	
		}
		
	}


	std::cin.get();
}

