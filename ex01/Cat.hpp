#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat : public Animal
{
        private:
                Brain*          _brain;   
        public:

                Cat(void);
                Cat(Cat const & cpy);
                ~Cat();

                Cat &        operator=(Cat const & src);
                void    makeSound(void) const;
                Brain &         getBrain(void) const;
                //void            setBrain(Brain & brain);
                void    printAllIdeas(Brain const & brain);


};

std::ostream&   operator<<(std::ostream& os, Cat const & src);

#endif