#include "Fixed.hpp"

Fixed::Fixed(void) : _num(0)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
    return ;    
}

Fixed&  Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
    {
        this->_num = fixed.getRawBits();
    }
    return (*this);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "GetRawBits member function called" << std::endl;
    
    return (this->_num);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "SetRawBits member function called" << std::endl;
    
    this->_num = raw;
    return ;
}
