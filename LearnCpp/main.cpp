#include <iostream>
#include <vector>
#include "shape.h"

int main() {
	Rectangle rect(3, 4);
	Triangle triang(3, 4);

	std::vector<Shape*> shapes(2);
	shapes[0] = &rect;
	shapes[1] = &triang;


	std::cout << "rect area: " << shapes[0]->area() << std::endl;
	std::cout << "triang area: " << shapes[1]->area() << std::endl;

	return 0;
}