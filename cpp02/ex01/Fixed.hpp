#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
    private:

        int _num;
        static const int    _fbits = 8;

    public:

        Fixed(void); // default constructor
        Fixed(const Fixed &fixed); // copy constuctor
        Fixed &operator=(const Fixed &fixed); //copy assign operator
        ~Fixed(void);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);

        // A constructor that takes a constant integer as a parameter.
        // It converts it to the corresponding fixed-point value. The
        // fractional bits value should be initialized to 8, like in
        // exercise 00.
        Fixed(const int intVal);

        // A constructor that takes a constant floating-point number as a
        // parameter. It converts it to the corresponding fixed-point value.
        // The fractional bits value should be initialized to 8, like in
        // exercise 00.
        Fixed(const float floatVal);

        // A member function float toFloat( void ) const; that converts the
        // fixed-point value to a floating-point value
        float toFloat( void ) const;

        // A member function int toInt( void ) const; that converts the
        // fixed-point value to an integer value.
        int     toInt(void) const;

};

// An overload of the insertion («) operator that inserts a floating-point
// representation of the fixed-point number into the output stream object
// passed as a parameter.

std::ostream    &operator<<(std::ostream &ostream, Fixed const &fixed);


#endif
