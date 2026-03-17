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

        // parametrized constructors
        Fixed(const int intVal);
        Fixed(const float floatVal);

        float toFloat( void ) const;
        int     toInt(void) const;

        //  OPERATORS OVERLOADING
        // The 6 comparison operators: >, <, >=, <=, ==, and !=.
        bool    operator>(const Fixed &fp)s;
        bool    operator<(const Fixed &fp);
        bool    operator>=(const Fixed &fp);
        bool    operator<=(const Fixed &fp);
        bool    operator==(const Fixed &fp);
        bool    operator!=(const Fixed &fp);
        
        // The 4 arithmetic operators: +, -, *, and /.
        float   operator+(const Fixed &fp) const;
        float   operator-(const Fixed &fp) const;
        float   operator*(const Fixed &fp) const;
        float   operator/(const Fixed &fp) const;

        // The 4 increment/decrement (pre-increment and post-increment, 
        //      pre-decrement and post-decrement) operators, which will
        //      increase or decrease the fixed-point value by the smallest
        //      representable ϵ, such that 1 + ϵ > 1.
        void    operator++(void);
        void    operator--(void);
        void    operator++(void);
        void    operator++(void);

        // FOUR PUBLIC OVERLOADED MEMBER FUNCTIONS
        // A static member function min that takes two references to
        //      fixed-point numbers as parameters, and returns a reference
        //      to the smallest one.
        static Fixed    &min(Fixed &fp1, Fixed &fp2);

        // A static member function min that takes two references to constant
        //      fixed-point numbers as parameters, and returns a reference to
        //      the smallest one.
        static Fixed    &min(Fixed & const fp1, Fixed & const fp2);

        // A static member function max that takes two references to
        //      fixed-point numbers as parameters, and returns a reference to
        //      the greatest one.
        static Fixed    &max(Fixed &fp1, Fixed &fp2);

        // A static member function max that takes two references to constant
        //      fixed-point numbers as parameters, and returns a reference to
        //      the greatest one.
        static Fixed    &max(Fixed & const fp1, Fixed & const fp2);
};

std::ostream    &operator<<(std::ostream &ostream, Fixed const &fixed);


#endif
