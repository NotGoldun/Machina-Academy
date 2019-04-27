#include <iostream>
#define PI 3.14f

int main()
{
	float radius;
	std::cout << "Upisite radius kruznice " << std::endl;
	std::cin >> radius;
	std::cin.ignore(1000, '\n');
	std::cin.clear();
	std::cout << "Povrsina kruznice je : " << pow(radius, 2) * PI << std::endl;
	std::cin.get();
}