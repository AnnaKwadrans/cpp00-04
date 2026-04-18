#include <iostream>
#include "07Sample.class.hpp"

Sample::Sample(void) : publicint(0), _privateint(1)
{
    std::cout << "Constructor called" << std::endl;
    std::cout << "public int: " << this->publicint << std::endl;
    std::cout << "private int: " << this->_privateint << std::endl;

    this->publicbar();
    this->_privatebar();

    return ;    
}

Sample::~Sample(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

void    Sample::publicbar(void) const
{
    std::cout << "Public function called" << std::endl;
    return ;
}

void    Sample::_privatebar(void) const
{
    std::cout << "Private function called" << std::endl;
    return ;
}