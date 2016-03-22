#pragma once

class Shape {
public:
	virtual const int area() = 0;
};

class Rectangle : public Shape {
	int width, height;
public:
	Rectangle(int w, int h) : width(w), height(h) {};
	const int area() { return width * height; };
};

class Triangle : public Shape {
	int base, height;
public:
	Triangle(int b, int h) : base(b), height(h) {};
	const int area() { return base * height / 2; };
};