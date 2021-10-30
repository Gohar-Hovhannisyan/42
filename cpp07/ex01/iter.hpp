#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T* arr, int n, void (*f)(T&))
{
    for (int i = 0; i < n; i++)
        f(arr[i]);
}

#endif