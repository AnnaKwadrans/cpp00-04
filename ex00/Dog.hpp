#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog : public Animal
{
        public:

                Dog(void);
                Dog(Dog const & cpy);
                ~Dog();

                Dog &        operator=(Dog const & src);
                void    makeSound(void) const;

};

#endif