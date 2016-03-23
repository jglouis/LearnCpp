#pragma once

class Shape {
public:
	virtual int area() const = 0;
	virtual ~Shape() {};
};

class Rectangle : public Shape {
	int width, height;
public:
	Rectangle(int w, int h) : width(w), height(h) {};
	int area() const { return width * height; };
};

class Triangle : public Shape {
	int base, height;
public:
	Triangle(int b, int h) : base(b), height(h) {};
	int area() const { return base * height / 2; };
};
