#include "iter.hpp"

template <typename T>
void add_2(T& a)
{
    a += 2;
}

int main()
{
    double arr[] = { 1.2, 2.3, 3.4, 4.6, 5.9 };
    iter<double>(arr, 5, add_2<double>);
    for (int i = 0; i < 5; i++)
        std::cout << arr[i] << std::endl;
}