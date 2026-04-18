#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>

class Animal
{
        protected:

                std::string     type;

        public:

                Animal(void);
                Animal(std::string const & type);
                Animal(Animal const & cpy);
                virtual ~Animal(); // si la clase tiene funciones virtuales, el destructor tiene que ser vurtual
                                   // para que llame al destructor de

                Animal &        operator=(Animal const & src);
                virtual void    makeSound(void) const;
                std::string     getType(void) const;

};



#endif