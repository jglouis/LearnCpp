#pragma once

// swap two integers
void swap(int & a, int & b) {
	int c = a;
	a = b;
	b = c;
}

// compute factorial of an integer
int fact(int n) {
	if (n == 1) return 1;
	else{
		n--;
		return (n + 1) * fact(n);
	}
}

// example of a destroyed returned referenced
// the object pointed by the reference is going out of the scope
class Rectangle; // forward declare
Rectangle& out_of_scope_return_value(){
	Rectangle a(3,4);
	Rectangle & b = a;
	return b;
}

// Example with pointer on the heap
Shape** get_shapes() {
	Shape** shapes = new Shape*[2];
	Rectangle* rect = new Rectangle(1, 2);
	Triangle* triang = new Triangle(3, 4);
	shapes[0] = rect;
	shapes[1] = triang;
	return shapes;
}
