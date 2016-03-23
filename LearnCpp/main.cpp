#include <iostream>
#include <vector>
#include "shape.h"
#include "container.h"
#include "util.h"

int main() {
	Rectangle rect(3, 4);
	Triangle triang(3, 4);

	std::vector<Shape*> shapes(2);
	shapes[0] = &rect;
	shapes[1] = &triang;

	Pair<Shape*> pair(&rect, &triang);

	std::cout << "rect area: " << shapes[0]->area() << std::endl;
	std::cout << "triang area: " << shapes[1]->area() << std::endl;

	std::cout << "rect area: " << pair.get_first()->area() << std::endl;
	std::cout << "triang area: " << pair.get_second()->area() << std::endl;

	int x(3), y(4);
	std::cout << "x is: " << x << std::endl;
	std::cout << "y is: " << y << std::endl;
	swap(x, y);
	std::cout << "swapping..." << std::endl;
	std::cout << "x is: " << x << std::endl;
	std::cout << "y is: " << y << std::endl;

	int i = 5;
	std::cout << "factorial of 5 is: " << fact(i) << std::endl;

	Rectangle& bad = out_of_scope_return_value();
	std::cout << bad.area() << std::endl;

	return 0;
}
