#include <iostream>
#include <string>	
#include <vector>


class Person
{
public:
	Person(std::string givenName, std::string givenLastName, std::string givenAddress)
	{
		_name = givenName;
		_lasteName = givenLastName;
		_address = givenAddress;
	}


	bool setSSN(std::string ssn)
	{
		if (_ssn != "")
		{
			std::cout << "Social Security Numbers is already set! " << std::endl;
			std::cout << "Persons SSN cannot be changed" << std::endl;
			return true;
		}

		if (ssn.size() != 11)
		{
			std::cout << "Social Security Number is invalid! Wrong number of digits!" << std::endl;
			return false;
		}

		for (size_t i = 0; i < ssn.size(); i++)
		{
			char current = ssn[i];
			if (current < 48 || current > 57)
			{
				std::cout << "Social Security Number is invalid!" << std::endl;
				std::cout << "Character at index " << i + 1 << "is invalid" << std::endl;
				return false;
			}
			_ssn = ssn;
			return true;
		}
		return false;
	}

	void print()
	{
		std::cout << "Name: " << _name << " " << _lasteName << std::endl;
		std::cout << "Adress: " << _address << std::endl;
		std::cout << "Social Security Number: " << _ssn << std::endl;
	}

private:
	std::string _name, _lasteName, _address, _ssn;
};


void inputNewData(std::string message, std::string& data)
{
	std::cout << message << std::endl;
	std::cin >> data;
	std::cin.clear();
	std::cin.ignore(1000, '\n');
}


void displayPersons(std::vector <Person> persons)
{
	for (size_t i = 0; i < persons.size(); i++)
	{
		persons[i].print();
	}
}
	
void createPerson(std::vector<Person>& persons)
{
	std::string name, lastName, address;
	inputNewData("Enter new persons name: ", name);
	inputNewData("Enter new persons last name: ", lastName);
	inputNewData("Enter new persons adress: ", address);

	Person person = Person(name, lastName, address);

	while (true)
	{

		std::string ssn;
		inputNewData("Enter new social security number: ", ssn);
		if (person.setSSN(ssn))
		{
			break;
		}
	}
	persons.push_back(person);
}


int main()
{
	std::vector <Person> persons;
	bool valid = true;
	while (valid)
	{
		std::cout << "What do you want to do: " << std::endl;
		std::cout << "1 - Add new person" << std::endl;
		std::cout << "2 - Exit" << std::endl;

		int choice;
		std::cin >> choice;
		std::cin.ignore(1000, '\n');
		std::cin.clear();

		switch (choice)
		{	
		case 1: 
			createPerson(persons);
			break;
		case 2:
			valid = false;
			break;
		default:
			break;
		}
	}

	displayPersons(persons);

	std::cin.get();
}

// Zadatak:
// Napraviti klasu osobe, sadrzava ime, prezime, adresu, oib
// Konstruktor treba inicijalizirati sve membere osim oiba
// Posebna metoda za setanje oiba, provjeriti jel valjan oib ili postojeæi, te na temelju toga namjestiti oib
// Napraviti program koji omoguæuje izradu novih osoba i ima moguænost pritanja svih unesenih osoba
