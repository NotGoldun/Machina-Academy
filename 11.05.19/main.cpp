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

	virtual void PrintArea() = 0;
	virtual void PrintPerimeter() = 0;
};

class Triangle : public Shape
{
public:

	float sideA, sideB, sideC;

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

	void PrintArea()
	{
		std::cout << "Area of rectangle is: " << sideA * sideB << std::endl;
	}

	void PrintPerimeter()
	{
		std::cout << "Perimeter of rectangle is: " << 2*sideA + 2*sideB << std::endl;
	}

};


int main()
{
	Triangle* myTriangle = new Triangle();
	myTriangle->sideA = 15.0f;
	myTriangle->sideB = 5.0f;
	myTriangle->sideC = 17.0f;

	Circle* myCircle = new Circle();
	myCircle->radius = 16.0f;

	Square* mySquare = new Square();
	mySquare->side = 27.0f;

	if (myTriangle->canYouMakeTriangle())
	{
		myTriangle->PrintPerimeter();
		myTriangle->PrintArea();
	}
	else
	{
		std::cout << "It is impossible to create triangle" << std::endl;
	}

	myCircle->PrintPerimeter();
	myCircle->PrintArea();

	mySquare->PrintPerimeter();
	mySquare->PrintArea();

	std::vector<Shape*> shapes;
	shapes.push_back(myTriangle);
	shapes.push_back(myCircle);
	shapes.push_back(mySquare);

	for (Shape* it : shapes)
	{
		it->PrintPerimeter();
		it->PrintArea();
	}

	std::cin.get();
}


