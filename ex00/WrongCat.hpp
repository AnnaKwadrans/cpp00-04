#ifndef WRONG_CAT_H
# define WRONG_CAT_H

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
        public:

                WrongCat(void);
                WrongCat(WrongCat const & cpy);
                ~WrongCat();

                WrongCat &        operator=(WrongCat const & src);
                void    makeSound(void) const;

};

#endif