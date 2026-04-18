#include "06Sample.class.hpp"

Sample::Sample(float const pf) : pi(pf), qd(42)
{
    std::cout << "Constructor called" << std::endl;
    return ;
}

Sample::~Sample(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

void    Sample::bar(void) const
{
    std::cout << "pi: " << this->pi << ", qd: " << this->qd << std::endl;
    return ;
}
