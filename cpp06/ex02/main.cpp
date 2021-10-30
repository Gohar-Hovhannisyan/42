#include "Class.hpp"

Base* generate(void)
{
    srand(time(NULL));
    int i = rand() % 3;
    std::cout << "i is: " << i << std::endl;
    if (i == 0)
        return (new A);
    else if (i == 1)
        return (new B);
    else
        return (new C);
}

void identify_from_pointer(Base* p)
{
    if (dynamic_cast<A*>(p) != nullptr)
        std::cout << "A\n";
    if (dynamic_cast<B*>(p) != nullptr)
        std::cout << "B\n";
    if (dynamic_cast<C*>(p) != nullptr)
        std::cout << "C\n";
}

void identify_from_reference(Base& p)
{
    if (dynamic_cast<A*>(&p))
        std::cout << "A\n";
    else if (dynamic_cast<B*>(&p))
        std::cout << "B\n";
    else if (dynamic_cast<C*>(&p))
        std::cout << "C\n";
}

int main()
{
    Base* temp = generate();
    Base& r = *generate();
    identify_from_pointer(temp);
    identify_from_reference(r);
    return 0;
}