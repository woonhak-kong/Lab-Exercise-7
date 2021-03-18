#pragma once
class Rectangle
{

public:
	Rectangle();
	Rectangle(float width, float length);
	virtual ~Rectangle();

	float getWidth();
	float getLength();
	void setWidth(float width);
	void setLength(float length);

	float GetPerimeter();
	float GetArea();


private:

	float m_width;
	float m_length;
};

