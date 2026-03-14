#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
    private:

        int _num;
        static const int    _fbits = 8; // numer of fractional bits
        // static - comun para todos los objetos de la clase

    public:

        Fixed(void); // default constructor
        // Parameterized Constructor ?
        Fixed(const Fixed &fixed); // copy constuctor (tiene que alocar memoria pq aun no existe)
        Fixed &operator=(const Fixed &fixed); //copy assign operator (cambia valor de un objeto ya creado)
        ~Fixed(void);

        int getRawBits(void) const;
        void    setRawBits(int const raw);

};

#endif