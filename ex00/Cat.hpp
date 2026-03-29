#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat : public Animal
{
        public:

                Cat(void);
                Cat(Cat const & cpy);
                ~Cat();

                Cat &        operator=(Cat const & src);
                void    makeSound(void) const;

};

#endif