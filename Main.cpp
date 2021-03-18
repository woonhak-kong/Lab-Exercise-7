#include "Rectangle.h"
#include <iostream>



using namespace std;

int main()
{
	Rectangle rectangleA;
	Rectangle rectangleB(20, 30);


	cout << "==========================================================\n";
	cout << "rectangleA's width is [" << rectangleA.getWidth() << "]\n";
	cout << "rectangleB's width is [" << rectangleB.getWidth() << "]\n";
	cout << "==========================================================\n";
	cout << "rectangleA's length is [" << rectangleA.getLength() << "]\n";
	cout << "rectangleB's length is [" << rectangleB.getLength() << "]\n";
	cout << "==========================================================\n\n";

	rectangleB.setLength(100);
	cout << "After rectangleB.setLength(100);\n";
	cout << "rectangleB's length is [" << rectangleB.getLength() << "]\n\n";

	rectangleB.setWidth(200);
	cout << "After rectangleB.setWidth(200);\n";
	cout << "rectangleB's width is [" << rectangleB.getWidth() << "]\n\n";

	cout << "==========================================================\n";
	cout << "rectangleA's Perimeter is [" << rectangleA.GetPerimeter() << "]\n";
	cout << "rectangleB's Perimeter is [" << rectangleB.GetPerimeter() << "]\n";
	cout << "==========================================================\n";
	cout << "rectangleA's Area is [" << rectangleA.GetArea() << "]\n";
	cout << "rectangleB's Area is [" << rectangleB.GetArea() << "]\n";
	cout << "==========================================================\n";


	return 0;
}