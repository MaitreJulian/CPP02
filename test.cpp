#include <iostream>
#include "test.hpp"

Test::Test(int& reference) : val(reference), ref(reference)
{
    std::cout << "Default constructor called" << std::endl;
}

Test::Test(const Test& other) : val(other.val), ref(other.ref)
{
    std::cout << "Copy constructor called" << std::endl;
}

Test& Test::operator=(const Test& other) 
{
    if (this != &other) 
    {
        val = other.val;
        ref = other.ref;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}
  

Test::~Test() 
{
    std::cout << "Destructor called" << std::endl;
}

int main() 
{
    int x = 42;
    Test a(x);
    Test b = a;
    Test c(a);

    std::cout << "Value of a: " << a.val << std::endl;
    std::cout << "Value of b: " << b.val << std::endl;
    std::cout << "Value of c: " << c.val << std::endl;
    b.ref = 3;
    b.val = 84;
    c.val = 100;
    std::cout << "Value of a: " << a.val << std::endl;
    std::cout << "Value of a.ref: " << a.ref << std::endl;
    std::cout << "Value of b: " << b.val << std::endl;
    std::cout << "Value of b.ref: " << b.ref << std::endl;
    std::cout << "Value of c: " << c.val << std::endl;
    std::cout << "Value of c.ref: " << c.ref << std::endl;
    return 0;
}
