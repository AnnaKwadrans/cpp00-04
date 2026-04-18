#include <iostream>
#include "09Sample.class.hpp"

Sample::Sample(void) : _foo(0)
{
    std::cout << "Constructor called" << std::endl;
    std::cout << "foo value in constructor: " << this->_foo << std::endl;
    
    return ;
}

Sample::~Sample(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

int Sample::getfoo(void) const
{
    return (this->_foo);
}

void    Sample::setfoo(int i)
{
    this->_foo = i;
    return ;
}
