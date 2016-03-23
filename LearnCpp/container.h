#pragma once

template<class T> class Pair {
	T first, second;
public:
	Pair(T first, T second) : first(first), second(second) {};
	T get_first() { return first; };
	T get_second() { return second; };
};