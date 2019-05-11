#include <iostream>
#include <string>
#include <vector>
#define PI 3.14f


//Polimorfizam radi samo na heapu!

//Zadatak:
//Napraviti interface Shape koji ima metode Area i Perimeter
// napraviti klase Triangle, Circle, Square koji implementiraju interface Shape:
// Napraviti objekte svake podklase i ispisate Area i Perimeter!

class Shape
{
public:
	std::string name;
	virtual void PrintArea() = 0;
	virtual void PrintPerimeter() = 0;
};

class Triangle : public Shape
{
public:

	float sideA, sideB, sideC;
	std::string name = "Triangle";

	bool canYouMakeTriangle()
	{
		if ((sideA+sideB) > sideC && (sideA + sideC) > sideB && (sideB + sideC) > sideA)
		{
			return true;
		}
		return false;
	}

	void PrintArea()
	{
		std::cout << "Area of triangle is: " << sqrt(((sideA + sideB + sideC) / 2 )*(((sideA + sideB + sideC) / 2)-sideA)*(((sideA + sideB + sideC) / 2 )-sideB)*(((sideA + sideB + sideC) / 2 )-sideC)) << std::endl;
	}

	void PrintPerimeter()
	{
		std::cout << "Perimeter of triangle is: " << sideA + sideB + sideC << std::endl;
	}
};

class Circle : public Shape
{
public:

	float radius;
	std::string name = "Circle";

	void PrintArea()
	{
		std::cout << "Area of circle is: " << pow(radius, 2) *PI << std::endl;
	}

	void PrintPerimeter()
	{
		std::cout << "Perimeter of circle is: " << 2 * radius*PI << std::endl;
	}
};

class Square : public Shape
{
public:

	float side;
	std::string name = "Square";


	void PrintArea()
	{
		std::cout << "Area of square is: " << pow(side, 2 )<< std::endl;
	}

	void PrintPerimeter()
	{
		std::cout << "Perimeter of square is: " << 4 * side << std::endl;
	}

};

class Rectangle : public Shape
{
public:

	float sideA, sideB;
	std::string name = "Rectangle";

	void PrintArea()
	{
		std::cout << "Area of rectangle is: " << sideA * sideB << std::endl;
	}

	void PrintPerimeter()
	{
		std::cout << "Perimeter of rectangle is: " << 2*sideA + 2*sideB << std::endl;
	}

};

void addShape(std::vector<Shape>& shapes)
{
	while (true)
	{
		int check;
		std::cout << "Which shape do you want to add? " << std::endl;
		std::cout << "[1] - Triangle." << std::endl;
		std::cout << "[2] - Circle." << std::endl;
		std::cout << "[3] - Square." << std::endl;
		std::cout << "[4] - Rectangle." << std::endl;

		switch (check)
		{
		case 1:
			std::cout << "Size of side A : " << std::endl;
			std::cout << "Size of side B : " << std::endl;
			std::cout << "Size of side C : " << std::endl;

			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

		default:
			std::cout << "Invalid input!" << std::endl;
			break;
		}

	}

}

int main()
{
	Triangle* myTriangle = new Triangle();
	Circle* myCircle = new Circle();
	Square* mySquare = new Square();
	Rectangle* myRectangle = new Rectangle();

	bool valid = true;
	std::vector<Shape*> shapes;

	while (valid)
	{
		int check;
		std::cout << "What do you want to do? " << std::endl;
		std::cout << " [1] Add shape. " << std::endl;
		std::cout << " [2] Exit and print all areas and perimeters. " << std::endl;
		std::cin >> check;
		std::cin.ignore(1000, '\n');
		std::cin.clear();

		switch (check)
		{
		case 1:
			addShape(shapes);
			break;
		case 2:
			valid = false;
			break;
		default:
			std::cout << "Invalid input. " << std::endl;
			break;
		}
	}


	for (Shape* it : shapes)
	{
		it->PrintPerimeter();
		it->PrintArea();
	}

	std::cin.get();
}


