#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"), _brain(new Brain) {
        std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat(Cat const & cpy) : Animal(cpy), _brain(new Brain) {
        std::cout << "Cat: Copy constructor called" << std::endl;
        *this = cpy;
}

Cat::~Cat() {
        std::cout << "Cat: Destructor called" << std::endl;
        delete _brain;
}

Cat&    Cat::operator=(Cat const & src) {
        std::cout << "Cat: Assign operator called" << std::endl;
        if (this != &src)
        {
                std::cout << "copying a cat..." << std::endl;
                Animal::operator=(src);
                *this->_brain = *src._brain;
                //for (int i = 0; i < 100; i++)
                //        this->_brain[i] = src._brain[i];
        }  
        return (*this);
}

void    Cat::makeSound(void) const {
        std::cout << "Meow!" << std::endl;
}

Brain &         Cat::getBrain(void) const {
        return (*this->_brain);
}

std::ostream&   operator<<(std::ostream& os, Cat const & src) {
        os << src.getType() << std::endl;
        Brain&  srcBrain = src.getBrain();
        for (int i = 0; i < N_IDEAS; i++)
        {
                os << srcBrain.getIdea(i);
                if (i != N_IDEAS - 1)
                        os << " | ";
        }
        os << std::endl << std::endl;;
        return (os);
}
