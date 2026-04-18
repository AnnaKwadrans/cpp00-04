#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

# include <iostream>

class Sample
{
    public:

        float const pi;
        int         qd;

        Sample(float const pf);
        ~Sample(void);

        void    bar(void) const; // const dice al compilador que la función 
                    //no va a cambiar nada en la instancia a la que se aplica

};

#endif
