#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
        private:
                Brain*          _brain;   
        
        public:

                Dog(void);
                Dog(Dog const & cpy);
                ~Dog();

                Dog &        operator=(Dog const & src);
                void    makeSound(void) const;
                Brain &         getBrain(void) const;
};

#endif