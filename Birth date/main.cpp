#include <iostream>
#include <string>


int main()
{
	std::string birthDate;
	std::cout << "Enter birth date. (Ex. 20.03.97. where 20. is day, 03. is month and 97. is year)" << std::endl;
	std::getline(std::cin, birthDate);
	std::cout << "Day of birth: " << birthDate.substr(0, 2) << std::endl;
	std::cout << "Month of birth: " << birthDate.substr(3, 2) << std::endl;
	std::cout << "Year of birth: " << birthDate.substr(6, 2) << std::endl;

	std::cin.get();
}