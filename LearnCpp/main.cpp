#include <iostream>
#include "shape.h"

int main() {
	Rectangle rect(3, 4);
	Triangle triang(3, 4);

	std::cout << "rect area: " << rect.area() << std::endl;
	std::cout << "triang area: " << triang.area() << std::endl;

	return 0;
}