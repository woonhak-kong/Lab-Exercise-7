#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() :
	m_width(1),
	m_length(1)
{
}

Rectangle::Rectangle(float width, float length):
	m_width(width),
	m_length(length)
{
	if (width <= 0)
	{
		std::cout << "Width must be more than 0 !!\n";
		std::cout << "Width will be default value 1\n";
		m_width = 1;
	}
	if (length <= 0)
	{
		std::cout << "Length must be more than 0 !!\n";
		std::cout << "Length will be default value 1\n";
		m_length = 1;
	}
}

Rectangle::~Rectangle()
{
	std::cout << "~Rectangle()\n";
}

float Rectangle::getWidth()
{
	return m_width;
}

float Rectangle::getLength()
{
	return m_length;
}

void Rectangle::setWidth(float width)
{
	if (width <= 0)
	{
		std::cout << "Width must be more than 0 !!\n";
		std::cout << "Width will be default value 1\n";
		m_width = 1;
		return;
	}
	m_width = width;
}

void Rectangle::setLength(float length)
{
	if (length <= 0)
	{
		std::cout << "Length must be more than 0 !!\n";
		std::cout << "Length will be default value 1\n";
		m_length = 1;
		return;
	}
	m_length = length;
}

float Rectangle::GetPerimeter()
{
	return (2 * m_width) + (2 * m_length);
}

float Rectangle::GetArea()
{
	return m_length * m_width;
}
