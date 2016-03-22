#pragma once

class Shape {
public:
	virtual int area()=0;
};

class Rectangle: public Shape {
	int width, height;
public:
	Rectangle(int w, int h);
	inline int area() { return width*height; };
};