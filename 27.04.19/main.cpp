#include <iostream>
#include <string>	
#include <vector>


struct Vector3
{
	float x, y, z;
};

class Entity
{
public:
	Vector3 position;

protected:
	std::string name;
};

class Player : public Entity
{
public:

	Vector3 getPosition()
	{
		return position;
	}

	std::string getName()
	{
		return name;
	}

};

class Enemy : public Entity
{
public:


};


int main()
{
	Entity entity = Entity();
	Vector3 vector = Vector3();
	Player player = Player();
	Enemy enemy = Enemy();
	player.position;
	enemy.position;

	std::cin.get();

}

// Zadatak:
// Napraviti klasu osobe, sadrzava ime, prezime, adresu, oib
// Konstruktor treba inicijalizirati sve membere osim oiba
// Posebna metoda za setanje oiba, provjeriti jel valjan oib ili postojeæi, te na temelju toga namjestiti oib
// Napraviti program koji omoguæuje izradu novih osoba i ima moguænost pritanja svih unesenih osoba
