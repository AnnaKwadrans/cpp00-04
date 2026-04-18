#include "Sample1.class.hpp"

Sample1::Sample1(char pc, int pi, float pf)
{
    std::cout << "Constructor called" << std::endl;
    this->c = pc;
    this->i = pi;
    this->f = pf;
    std::cout << "char: " << this->c << ", int: " << this->i 
        << ", float: " << this->f << std::endl;
    return ;
}

Sample1::~Sample1(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}
