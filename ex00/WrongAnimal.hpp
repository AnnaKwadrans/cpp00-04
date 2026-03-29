#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

# include <string>
# include <iostream>

class WrongAnimal
{
        protected:

                std::string     type;

        public:

                WrongAnimal(void);
                WrongAnimal(std::string const & type);
                WrongAnimal(WrongAnimal const & cpy);
                virtual ~WrongAnimal();

                WrongAnimal &        operator=(WrongAnimal const & src);
                void    makeSound(void) const; // no virtual
                std::string     getType(void) const;

};



#endif