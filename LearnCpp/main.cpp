#include <iostream>
#include "shape.h"

int main() {
	Rectangle rect(3, 4);

	std::cout << "rect area: " << rect.area() << std::endl;

	return 0;
}