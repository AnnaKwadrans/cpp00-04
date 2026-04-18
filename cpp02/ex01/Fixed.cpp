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

Fixed::Fixed(const int intVal)
{
    this->setRawBits(intVal << this->_fbits);
    return;
}

Fixed::Fixed(const float floatVal)
{
    this->setRawBits(static_cast<int>(floatVal * (1 << this->_fbits)));
    return;
}

float   Fixed::toFloat( void ) const
{
    return (static_cast<float>(this->getRawBits()) / (1 << this->_fbits));
}

int     Fixed::toInt(void) const
{
    return (this->getRawBits() >> this->_fbits);
}

std::ostream    &operator<<(std::ostream &os, Fixed const &fixed)
{
    os << fixed.toFloat();
    return (os);
}
