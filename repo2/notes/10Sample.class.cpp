#include <iostream>
#include "10Sample.class.hpp"

Sample::Sample(int i)
{
    std::cout << "Constructor called" << std::endl;
    this->_foo = i;
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

int    Sample::compare(Sample * other) const
{
    if (this->_foo < other->getfoo())  // use getfoo pq _foo es private
        return (-1);
    else if (this->_foo > other->getfoo())
        return (1);
    else
        return (0);
}
