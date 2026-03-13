/*
#include <iostream>
#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed b( a );
    Fixed c;

    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    
    return 0;
}
*/

#include <cmath>
#include <iostream>
#include <iomanip>

int main (void)
{
    double pi = 3.141592653589;

    std::cout << std::setprecision(15) << pi << std::endl;

    double op1 = cos(pi/2);

    std::cout << std::setprecision(15) << op1 << std::endl;

    double op2 = op1 / 1e-17;

    std::cout << std::setprecision(15) << op2 << std::endl;
    
    return (0);
}
