#include <iostream>
#include <string>

int main()
{
	std::string userText;
	char character;
	std::cout << "Upisite tekst kod kojeg zelite izbriati jedan karakter" << std::endl;
	std::getline(std::cin, userText);
	std::cout << "Upisite karakter koji zelite izbrisati" << std::endl;
	std::cin >> character;
	std::cin.ignore(1000, '\n');
	std::cin.clear();
	for (int i = 0; i < userText.length(); i++)
	{
		if (userText[i] == character)
		{
			std::cout << " ";
		}
		else
		{
			std::cout << userText[i];
		}
	}
	std::cin.get();
}