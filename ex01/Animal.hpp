#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>
# include "Brain.hpp"

class Animal
{       
        protected:

                std::string     type;

        public:

                Animal(void);
                Animal(std::string const & type);
                Animal(Animal const & cpy);
                virtual ~Animal(); // si la clase tiene funciones virtuales, el destructor tiene que ser virtual
                                   // para que llame al destructor de

                Animal &        operator=(Animal const & src);
                virtual void    makeSound(void) const;
                std::string     getType(void) const;

                //virtual Brain &         getBrain(void) const = 0;
                //virtual void            setBrain(Brain & brain) = 0;

};



#endif