#include "Sample2.class.hpp"

Sample2::Sample2(char pc, int pi, float pf) : c(pc), i(pi), f(pf)
{
    std::cout << "Constructor called" << std::endl;
    std::cout << "char: " << this->c << ", int: " << this->i 
        << ", float: " << this->f << std::endl;
    return ;
}

Sample2::~Sample2(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}
