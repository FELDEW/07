#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &one, T &two)
{
	T temp;
	temp = one;
	one = two;
	two = temp;
}

template <class T>
const T& min(const T& a, const T& b)
{
	return (a < b) ? a : b;
}

template <class T>
const T& max(const T& a, const T& b)
{
    return (a > b) ? a : b;
}

#endif