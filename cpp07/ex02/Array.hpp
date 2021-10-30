#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {
private:
    T* arr;
    unsigned int length;
public:
    Array() : arr(NULL), length(0) {}
    Array(unsigned int n) {
        arr = new T[n];
        for (int i = 0; i < n; i++)
            arr[i] = T();
        length = n;
    }
    ~Array() {delete[] arr;}
    Array(const Array& other)
    {
		this->length = other.size();
		this->arr = new T[this->length];
		for (int i = 0; i < this->length; i++)
			this->arr[i] = other.arr[i];
    }
	const Array& operator=(const Array& other)
	{
		this->length = other.length();
		this->arr = new T[this->length];
		for (int i = 0; i < this->length; i++)
			this->arr[i] = other.arr[i];
		return *this;
	}
    unsigned int size() const { return this->length; }
	T& operator[](int idx)
	{
		if (idx < 0 || idx >= this->length)
			throw Array::OutOfLimit();
		else
			return arr[idx];
	}
    const T& operator[](int idx) const
	{
		if (idx < 0 || idx >= this->length)
			throw Array::OutOfLimit();
		else
			return arr[idx];
	}

	class OutOfLimit : public std::exception
	{
		const char* what() const throw()
		{
			return "Index is out of limit";
		}
	};
};

#endif