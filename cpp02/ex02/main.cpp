#include <iostream>
#include "Fixed.hpp"

int main( void ) {

        Fixed a;
        Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

        std::cout << a << std::endl;
        std::cout << ++a << std::endl;
        std::cout << a << std::endl;
        std::cout << a++ << std::endl;
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << Fixed::max( a, b ) << std::endl;


        Fixed c(15);
        Fixed d(4);

        std::cout << (c + d) << std::endl;
        // 8 fractional bits>> step size = 1 / 256 = 0.00390625
        // cannot represent every decimal exactly — only multiples of 0.00390625

        std::cout << (c - d) << std::endl;
        std::cout << (c * d) << std::endl;
        std::cout << (c / d) << std::endl;
        std::cout << Fixed::max( c, d ) << std::endl;
        std::cout << Fixed::min( c, d ) << std::endl;

        std::cout << d << std::endl;
        std::cout << --d << std::endl;
        std::cout << d << std::endl;
        std::cout << d-- << std::endl;
        std::cout << d << std::endl;

        return 0;
}
