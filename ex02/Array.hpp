#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cctype>
#include <exception>
#include <string>
#include <ctime>
#include <cstdlib>

template <class T>
class Array
{
	private:
		unsigned int  n;
		T *arr;
	public:
		Array():n(0), arr(NULL) {}
		~Array() {if (this->n > 0) delete[] this->arr;}
		Array(unsigned int n): n(n), arr(NULL) {this->arr = new T[this->n]();}
		unsigned int size() const {return this->n;}
		Array(Array<T> const &origin): n(origin.n), arr(NULL) 
		{
				*this = origin;
		}
		class OutOfLimitsException: public std::exception 
		{
			virtual const char* what() const throw()
			{
				return ("Out of limits!");
			}
		};
		Array &operator=(Array const &origin)
		{
			if (this->n > 0)
				delete[] this->arr;
			this->arr = NULL;
			if (origin.n > 0)
			{
				this->arr = new T[origin.n]();
				for (unsigned int i = 0; i < origin.n; i++)
				this->arr[i] = origin.arr[i];
			}
			this->n = origin.n;
			return (*this);
		}
		T &operator[](unsigned int length)
		{
			if (length >= this->n)
				throw Array::OutOfLimitsException();
			return (this->arr[length]);
		}
		T const &operator[](size_t length) const
		{
			return (operator[](length));
		}
};

#endif