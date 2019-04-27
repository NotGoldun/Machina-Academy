#include <iostream>
#include <string>

int main()
{
	std::string userText;
	std::cout << "Upisite tekst koji zelite ipisati unazad " << std::endl;
	std::getline(std::cin, userText);
	for (int i = userText.length() - 1; i >= 0; i--)
	{
		std::cout << userText[i];
	}
	std::cin.get();
}